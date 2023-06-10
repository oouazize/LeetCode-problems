class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        set<int> hashTable;
        int oldSize;
        for (int index = 0; index < nums.size() && index <= k; index++) {
            oldSize = hashTable.size();
            hashTable.insert(nums[index]);
            if (hashTable.size() == oldSize) return true;
        }
        for (int index = k + 1; index < nums.size(); index++) {
            hashTable.erase(nums[index - k - 1]);
            oldSize = hashTable.size();
            hashTable.insert(nums[index]);
            if (hashTable.size() == oldSize) return true;
        }
        return false;
    }
};