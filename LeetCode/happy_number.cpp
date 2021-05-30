class Solution {
public:
    int squares(int n){
        int x = 0;
        while(n){
            x += pow(n%10, 2);
            n /= 10;
        }
        return x;
    }
    bool isHappy(int n) {
        if(n==1 || squares(n) == 1) return true;
        int slow = squares(n), fast = squares(n);
        fast = squares(fast);
        while(slow != fast){
            slow = squares(slow);
            fast = squares(fast);
            fast = squares(fast);
            if(fast == 1 || slow == 1) return true;
        }
        return false;
    }
};
