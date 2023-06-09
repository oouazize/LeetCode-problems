class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        int res = x;
        unsigned int rev = 0;
        while (x) {
            int rem = x % 10;
            rev = rev*10 + rem;
            x /= 10;
        }
        if (res == rev) return true;
        return false;
    }
};