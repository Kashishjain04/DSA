class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;
        map<char,int> m;
        for(int i=0; i<s.length(); i++){
            if(!m[s[i]]) m[s[i]] = 1;
            else m[s[i]]++;
        }
        for(int i=0; i<t.length(); i++){
            if(!m[t[i]]) return false;
            m[t[i]]--;
        }
        return true;
    }
};
