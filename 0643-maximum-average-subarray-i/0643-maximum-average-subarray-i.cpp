class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double res = 0;
        for (int i = 0; i < k; i++)
            res += nums[i];
        double current_n = res;
        for (int i = k; i < nums.size(); i++) {
            current_n += nums[i] - nums[i - k];
            res = max(res, current_n);
        }
        return res / k;
    }
};