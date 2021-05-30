class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        for(int i=0; i<numbers.size(); i++){
            int t = target-numbers[i];
            int sec = lower_bound(numbers.begin()+i+1, numbers.end(), t) - numbers.begin();
            if(sec < numbers.size() && numbers[sec] == t)
                return vector<int>{i+1,sec+1};
        }
        return vector<int>{};
    }
};
