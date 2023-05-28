class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        res.reserve(2);
        for (int i = 0; i < nums.size(); i++) {
            int val  = nums[i];
            auto it = find(nums.begin() + i + 1, nums.end(), target - val);
            if (it != nums.end()) {
                val = it - nums.begin();
                res.push_back(i);
                res.push_back(val);
                return res;
            }
        }
        return res;
    }
};