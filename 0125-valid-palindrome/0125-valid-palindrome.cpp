class Solution {
public:
    bool isPalindrome(string s) {
        for (int i = 0, j = s.size() - 1; i < j;) {
            if (isalnum(s[i]) && isalnum(s[j]) && (tolower(s[i]) != tolower(s[j])))
                return false;
            else if (!isalnum(s[i])) i++;
            else if (!isalnum(s[j])) j--;
            else {
                i++;
                j--;
            }
        }
        return true;
    }
};