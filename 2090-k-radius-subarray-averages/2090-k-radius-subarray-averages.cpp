class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        vector<int> res(nums.size(), -1);
        long long avg = 0;
        int len = k * 2;
        if (nums.size() < len + 1) return res;
        for (int i = 0; i < nums.size() && i <= len; i++)
            avg += nums[i];
        long long current = avg;
        int j = nums.size() - k;
        for (int i = len + 1; i < nums.size(); i++) {
            current += nums[i] - nums[i - len - 1];
            res[i - k - 1] = avg / (len + 1);
            avg = current;
        }
        if (j - 1 < nums.size()) res[j - 1] = avg / (len + 1);
        return res;
    }
};