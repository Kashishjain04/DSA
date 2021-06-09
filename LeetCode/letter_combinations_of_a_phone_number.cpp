// https://leetcode.com/problems/letter-combinations-of-a-phone-number

class Solution {
public:
    string getChars(char d){
        switch(d){
            case '2':
                return "abc";
            case '3':
                return "def";
            case '4':
                return "ghi";
            case '5':
                return "jkl";
            case '6':
                return "mno";
            case '7':
                return "pqrs";
            case '8':
                return "tuv";
            case '9':
                return "wxyz";
            default:
                return "";
        }
    }
    vector<string> letterCombinations(string digits) {
        if(digits.length() == 0)return vector<string>{};
        vector<string> res;
        string chars = getChars(digits[0]);
        for(auto i:chars){
            if(digits.length() == 1){
                string a;
                a += i;
                res.push_back(a);
            }else{
                for(auto j:letterCombinations(digits.substr(1))) res.push_back(i+j);
            }
        }
        return res;
    }
};
