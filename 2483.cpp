class Solution {
public:
    int bestClosingTime(string cust) {
        vector<int> pen(cust.size());
        int cntY = 0, cntN = 0, j = -1, currPen = cust.size();
        for(int i = 0; i < cust.size(); i++) {
            pen[i] = cntN;
            if(cust[i] == 'N')
                cntN++;
        } 
        pen.push_back(cntN);
        for(int i = cust.size()-1; i >= 0; i--) {
            if(cust[i] == 'Y')
                cntY++;
            pen[i] += cntY;
        } 
        for(int i = 0; i < pen.size(); i++) {
            if(pen[i] < currPen) {
                j = i;
                currPen = pen[i];
            }
        }
        return j;
    }
};
