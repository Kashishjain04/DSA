// https://leetcode.com/problems/add-digits/

// digital root formula
//dr_10 (n)=0, if n=0
//dr_10 (n) = 9, if n=9k
//dr_10 (n) = n % 9, if  n != 9

class Solution {
public:
    int addDigits(int num) {
        if(num<10) return num;
        if(num%9 == 0) return 9;
        return num%9;
    }
};
