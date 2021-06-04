// https://leetcode.com/problems/move-zeroes/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        if(nums.size()==1) return;
        int ctr=0;
        for(auto it=nums.begin(); it!=nums.end(); it++){
            if(*it == 0){
                ctr++;
                nums.erase(it);
                it--;
            }
        }
        while(ctr--){
            nums.push_back(0);
        }
    }
};
