// https://leetcode.com/problems/power-of-three

class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<1) return false;
        return ceil(log10(n)/log10(3)) == floor(log10(n)/log10(3));
    }
};
