// https://leetcode.com/problems/reverse-vowels-of-a-string

class Solution {
public:
    bool isvowel(char ch) {
        return (ch == 'a') || (ch == 'e') ||(ch == 'i') ||(ch == 'o') ||(ch == 'u') || (ch == 'A') || (ch == 'E') ||(ch == 'I') ||(ch == 'O') ||(ch == 'U');
    }
    string reverseVowels(string s) {
        stack<char> st;
        for(auto i:s){
            if(isvowel(i)){
                st.push(i);
            }
        }
        for(int i=0; i<s.length(); i++){
            if(isvowel(s[i])){
                s[i] = st.top();
                st.pop();
                if(st.size() == 0) break;
            }
        }
        return s;
    }
};
