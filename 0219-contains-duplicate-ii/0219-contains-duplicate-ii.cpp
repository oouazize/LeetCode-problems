class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        set<int> list;
        int oldSize;
        for (int index = 0; index < nums.size() && index <= k; index++) {
            oldSize = list.size();
            list.insert(nums[index]);
            if (list.size() == oldSize) return true;
        }
        for (int index = k + 1; index < nums.size(); index++) {
            list.erase(nums[index - k - 1]);
            oldSize = list.size();
            list.insert(nums[index]);
            if (list.size() == oldSize) return true;
        }
        return false;
    }
};