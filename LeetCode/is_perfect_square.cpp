// https://leetcode.com/problems/valid-perfect-square

class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num == 1) return 1;
        int low=2, up=46340;
        while(low<=up){
            int mid = (low+up)/2;
            if(mid*mid == num) return true;
            if(mid*mid < num) low = mid+1;
            if(mid*mid > num) up = mid-1;
        }
        return false;
    }
};
