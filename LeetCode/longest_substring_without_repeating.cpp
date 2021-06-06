// https://leetcode.com/problems/longest-substring-without-repeating-characters

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>m;
        
        int temp=0, ans=0;
        for(int i=0; i<s.length(); i++){
            if(m[s[i]]&&m[s[i]] > 0){
                ans = max(ans,temp);
                i=m[s[i]]-1;
                m.clear();
                temp=0;
            }else{
                temp++;
                m[s[i]] = i+1;
            }
        }
        return max(ans,temp);
    }
};
