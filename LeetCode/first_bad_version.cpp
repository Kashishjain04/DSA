// https://leetcode.com/problems/first-bad-version
// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int rec(int low, int up){
        if(low>=up) {
            if(!isBadVersion(low)) return low+1;
            return low;
        };
        int mid = ((long)low+up)/2;
        if(isBadVersion(mid)) return rec(low,mid-1);
        return rec(mid+1,up);
    }
    
    int firstBadVersion(int n) {
        if(n==1) return 1;
        return rec(1,n-1);
    }
};
