class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int> >& points) {
        int moves = 0;
        for (int i = 1; i < points.size(); i++) {
            int resX = abs(points[i][0] - points[i - 1][0]);
            int resY = abs(points[i][1] - points[i - 1][1]);
            moves += max(resX, resY);
        }
        return moves;
    }
};