// https://leetcode.com/problems/string-to-integer-atoi

class Solution {
public:
    int myAtoi(string s) {
        long ans=0;
        bool positive = true,start=false;
        for(auto i:s){
            if(start && !isdigit(i)) break;
            if(i == ' ') continue;
            if(i == '+') {
                start = true;
                positive = true;
                continue;
            };
            if(i == '-') {
                start = true;
                positive = false;
                continue;
            };
            if(isdigit(i)){
                start = true;
                ans = ans*10 + (i-'0');
                if(ans > pow(2,31)) break;
            }else{
                break;
            }
        }
        return positive ? min(ans, (long)pow(2,31)-1) : max(-1*ans, -1*(long)pow(2,31));
    }
};
