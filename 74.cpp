class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size(), col = matrix[0].size();
        int s = 0, e = row * col - 1;

        while ( s <= e) {
            int mid = (s + e) >> 1;
            int element = matrix[mid / col][mid % col];
            if (element == target)
                return true;
            else if (element > target)
                e = mid - 1;
            else 
                s = mid + 1;
        }
        return false;
    }
};
