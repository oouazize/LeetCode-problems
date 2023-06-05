class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int r = nums.size() - 1;
        bool flag = false;
        while (r >= 0) {
            if ((nums[r] == 0 || flag) && r+1 < nums.size()) {
                if (nums[r+1] == 0)  {
                    flag = false;
                    r--;
                }
                else {
                    nums[r] ^= nums[r+1];
                    nums[r+1] ^= nums[r];
                    nums[r] ^= nums[r+1];
                    r++;
                    flag = true;
                }
            }
            else
                r--;
        }
    }
};