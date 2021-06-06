// https://leetcode.com/problems/guess-number-higher-or-lower

/**
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return          -1 if num is lower than the guess number
 *                  1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int low=1,up=n;
        while(low<up){
            int mid=((long)low+up)/2;
            int g = guess(mid);
            if(g==0){
                return mid;
            }
            if(g==1){
                low=mid+1;
            }else{
                up=mid-1;
            }
        }
        return low;
    }
};
