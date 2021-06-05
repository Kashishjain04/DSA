// https://leetcode.com/problems/ugly-number

class Solution {
public:
    int gpower(int n, int b, int lo, int hi) {
        int mid = (lo+hi)/2;
        
        int r1 = n % (long long)pow(b, mid+1);
        int r2 = n % (long long)pow(b, mid);
        int r3 = n % (long long)pow(b, mid-1);
        
        if (r1 && r2 == 0) return mid;
        
        if (r2 && r3 == 0) return mid-1;
        
        if (r2) return gpower(n, b, lo, mid-1);
        
        return gpower(n, b, mid+1, hi);
        
    }
    bool isUgly(int n) {
        if(n <= 0) return false;
        if(n <= 6) return true;
        if(n%2==0){
            int p = gpower(n,2,1,31);
            n /= pow(2,p);
        }
        if(n%3==0){
            int p = gpower(n,3,1,18);
            n /= pow(3,p);
        }
        if(n%5==0){
            int p = gpower(n,5,1,13);
            n /= pow(5,p);
        }
        if(n==1) return true;
        return false;
    }
};
