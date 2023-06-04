class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string s;
        for (int i = 0; i < word1.size() || i < word2.size(); i++) {
            if (i < word1.size()) s.append(1, word1[i]);
            if (i < word2.size()) s.append(1, word2[i]);
        }
        return s;
    }
};