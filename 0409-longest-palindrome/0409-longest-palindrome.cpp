class Solution {
public:
    int longestPalindrome(string s) {
        int res = 0;
        bool add = false;
        double rest;
        if (s.size() <= 1) return 1;
        unordered_map<char, int> table;
        for (char ch: s)
            table[ch]++;
        for (auto i = table.begin(); i != table.end(); i++){
            if (i->second % 2) add = true;
            res += i->second / 2 * 2;
        }
        cout << res << endl;
        if (res % 2 == 0 && add) res++;
        return res;
    }
};