class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int maxD = 0, j = colors.size()-1, i = 0;
        while(0 < j) {
            if(colors[0] != colors[j])
                maxD = max(maxD, j);
            j--;
        }
        while(j < colors.size()-1) {
            if(colors[j] != colors[colors.size()-1])
                maxD = max(maxD, int(colors.size()-1-j));
            j++;
        }
        return maxD;
    }
};
