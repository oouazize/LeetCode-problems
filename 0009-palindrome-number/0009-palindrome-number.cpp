class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        int size = 0;
        for (int n = x; n > 0; n/= 10) size++;
        while (x) {
            int r = x % 10;
            int l = x / pow(10, size - 1);
            if (l != r) return false;
            x /= 10;
            size -= 2;
            if (size < 0) break;
            x %= (int)(pow(10, size));
        }
        return true;
    }
};