// https://leetcode.com/problems/3sum-closest

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int sum;
        if(nums.size() == 3) return nums[0]+nums[1]+nums[2];
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size(); i++){
            if(i>0 && nums[i] == nums[i-1]) continue;
            int j=i+1, k=nums.size()-1;
            while(j<k){
                if(nums[i]+nums[j]+nums[k] == target){
                    return target;
                }
                else {
                    if(abs(nums[i]+nums[j]+nums[k] - target) < abs(sum - target)) sum = nums[i]+nums[j]+nums[k];
                    if(nums[i]+nums[j]+nums[k] < target) j++;
                    else k--;
                }
            }
        }
        return sum;
    }
};
