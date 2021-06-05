// https://leetcode.com/problems/power-of-four

class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<1) return false;
        return ceil(log10(n)/log10(4)) == floor(log10(n)/log10(4));
    }
};
