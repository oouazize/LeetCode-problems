class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int, int> list;
        for (int i = 0; i < nums.size(); i++) {
            if (list.count(nums[i])) {
                if (abs(i - list[nums[i]]) <= k) return true;
                list[nums[i]] = i;
            }
            else
                list.insert({nums[i], i});
        }
        return false;
    }
};