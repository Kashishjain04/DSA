// https://leetcode.com/problems/counting-bits

class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>ans;
        for(int i=0; i<=n; i++){
            ans.push_back(0);
            for(int j=0; j<32; j++){
                if(i & 1<<j) ans[i]++;
            }
        }
        return ans;
    }
};
