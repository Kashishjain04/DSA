class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> res;
        if(nums.size() == 0) return res;
        if(nums.size() == 1) {
            res.push_back(to_string(nums[0]));
            return res;
        }
        pair<long,long> p;
        p.first = nums[0];
        p.second = nums[0];
        for (int i=1; i<nums.size(); i++) {
            if((nums[i] - p.second) == 1){
                p.second = nums[i];
            }else{
                if(p.first == p.second){
                    res.push_back(to_string(p.first));
                }else{
                    string str = to_string(p.first) + "->" + to_string(p.second);
                    res.push_back(str);
                }
                p.first = nums[i];
                p.second = nums[i];
            }
            if(i==nums.size()-1){
                if(p.first == p.second){
                    res.push_back(to_string(p.first));
                }else{
                    string str = to_string(p.first) + "->" + to_string(p.second);
                    res.push_back(str);
                }
            }
        }
        return res;
}
};
