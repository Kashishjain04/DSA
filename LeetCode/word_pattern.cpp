// https://leetcode.com/problems/word-pattern

class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,string> m1;
        unordered_map<string,char> m2;
        vector<string> words;
        int start=0;
        for(int i=1; i<s.length(); i++){
           if(s[i] == ' '){
               words.push_back(s.substr(start,i-start));
               start = i+1;
           }
        }
        if(start<s.length()){
            words.push_back(s.substr(start));
        }
        if(pattern.length() != words.size()) return false;
        for(int i=0; i<pattern.length(); i++){
            if(m1.find(pattern[i]) != m1.end() && m2.find(words[i]) != m2.end()){
                if(m1[pattern[i]] != words[i] || m2[words[i]] != pattern[i]) return false;
            }
            else if(m1.find(pattern[i]) != m1.end() || m2.find(words[i]) != m2.end())return false;
            else{
                m1[pattern[i]] = words[i];
                m2[words[i]] = pattern[i];
            }
        }
        return true;
    }
};
