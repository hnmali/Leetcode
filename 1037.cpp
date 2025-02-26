class Solution {
public:
    bool isBoomerang(vector<vector<int>>& pt) {
        int area = pt[0][0] * (pt[1][1] - pt[2][1]) +
                   pt[1][0] * (pt[2][1] - pt[0][1]) +
                   pt[2][0] * (pt[0][1] - pt[1][1]);
        return (area != 0);
    }
};
