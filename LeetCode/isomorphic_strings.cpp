class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int sl = s.length(), tl = t.length();
        if(sl != tl) return false;
        unordered_map<char, char> map;
        unordered_set<char> set;
        for(int i=0; i<sl; i++){
            if(!map[s[i]] && set.find(t[i]) == set.end()){
                map[s[i]] = t[i];
                set.insert(t[i]);
            }
            if(map[s[i]] != t[i]) return false;
        }
        return true;
    }
};
