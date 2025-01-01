class Solution {
public:
    vector<int> constructRectangle(int area) {
        int w = sqrt(area);
        while(1) {
            int l = area/w;
            if(l*w == area)
                return {l,w};
            w--; 
        }
        return {-1,-1};
    }
};
