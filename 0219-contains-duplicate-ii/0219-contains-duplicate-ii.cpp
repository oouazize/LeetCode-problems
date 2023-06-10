class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        set<int> list;
        for (int index = 0; index < nums.size() && index <= k; index++) {
            if (list.count(nums[index])) return true;
            list.insert(nums[index]);
        }
        for (int index = k + 1; index < nums.size(); index++) {
            list.erase(nums[index - k - 1]);
            if (list.count(nums[index])) return true;
            list.insert(nums[index]);
        }
        return false;
    }
};