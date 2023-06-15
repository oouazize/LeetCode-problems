class Solution {
public:
    int lengthOfLongestSubstring(string s) {
			int res = 0;
			int start = 0;
			if (s.size() == 0) return 0;
			std::vector<bool> allChars(256);
			for (int i = 0; i < s.size(); i++) {
				while (allChars[s[i]])
					allChars[s[start++]] = 0;
				allChars[s[i]] = 1;
				res = max(res, i - start + 1);
			}
			return res;
    }
};