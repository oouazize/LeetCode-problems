class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        vector<vector<int> > res;
        res.reserve(arr.size());
        int num = std::numeric_limits<int>::max();
        for (int i = 0; i < arr.size() - 1; i++) {
            if (arr[i+1] - arr[i] < num)
                num = arr[i+1] - arr[i];
        }
        for (int i = 0; i < arr.size() - 1; i++) {
            if (arr[i+1] - arr[i] == num)
                res.push_back(vector<int>(arr.begin() + i, arr.begin() + i + 2));
        }
        return res;
    }
};