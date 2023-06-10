class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int current_min = 0;
        for (int j = 0; j < blocks.size(); j++)
            (blocks[j] == 'W') ? blocks[j] = 1 : blocks[j] = 0;
        for (int i = 0; i < k; i++) current_min += (int)blocks[i];
        if (k == blocks.size()) return current_min;
        int min_sum = current_min;
        for (int i = k; i < blocks.size(); i++) {
            current_min += (int)(blocks[i]) - (int)(blocks[i - k]);
            min_sum = min(current_min, min_sum);
        }
        return min_sum;
    }
};