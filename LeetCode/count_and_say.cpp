// https://leetcode.com/problems/count-and-say

class Solution {
public:
string getstring(string s){
        if(s.length()==0) return "";
        string ans;
        int c=1;
        for(int i=1; i<s.length(); i++){
            if(s[i] == s[i-1]) c++;
            else{
                char t = 48+c;
                ans += t;
                ans += s[0];
                ans += getstring(s.substr(i));
                return ans;
            }
        }
        char t = 48+c;
        ans += t;
        ans += s[0];
        return ans;
    }
    string countAndSay(int n) {
        string ans = "1";
        while(n>1){
            ans = getstring(ans);
            n--;
        }
        return ans;
    }
};
