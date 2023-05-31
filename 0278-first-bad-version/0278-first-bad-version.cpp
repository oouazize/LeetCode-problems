// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int l = 1;
        for (int r = n; l < n;) {
            int m = l + (r - l) / 2;
            if (m == l && isBadVersion(m)) return l;
            if (isBadVersion(m)) r = m;
            else l = m + 1;
        }
        return l;
    }
};