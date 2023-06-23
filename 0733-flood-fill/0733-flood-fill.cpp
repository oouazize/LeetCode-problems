class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n = image.size();
        int m = image[0].size();
        int oldColor = image[sr][sc];
        if (oldColor == color) return image;
        queue<pair<int, int> > list;
        list.push(make_pair(sr, sc));
        while (!list.empty()) {
            pair<int, int> p = list.front();
            int i = p.first;
            int j = p.second;
            list.pop();
            if (i >= 0 && j >= 0 && i < n && j < m && image[i][j] == oldColor) {
                image[i][j] = color;
                list.push(make_pair(i + 1, j));
                list.push(make_pair(i - 1, j));
                list.push(make_pair(i, j + 1));
                list.push(make_pair(i, j - 1));
            }
        }
        return image;
    }
};