class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int area = 0, diag = 0;
        for(int i = 0; i < dimensions.size(); i++) {
            int currDiag = dimensions[i][0]*dimensions[i][0]
                        + dimensions[i][1]*dimensions[i][1];
            if(currDiag > diag) { 
                area = dimensions[i][0]*dimensions[i][1];
                diag = currDiag;
            }
            else if(currDiag == diag) {
                int currArea = dimensions[i][0]*dimensions[i][1];
                area = max(currArea,area);
            }
        }
        return area;
    }
};
