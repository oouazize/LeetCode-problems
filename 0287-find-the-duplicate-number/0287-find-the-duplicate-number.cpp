class Solution {
public:
    int Abs(int n) {
        int const mask = n >> (sizeof(int) * 8 - 1);
        return ((n + mask) ^ mask);
    }
    int findDuplicate(vector<int>& nums) {
        for (int n: nums) {
            int nb = Abs(n);
            nums[nb - 1] *= -1;
            if (nums[nb - 1] > 0)
               return nb;
        }
        return 1;
    }
};