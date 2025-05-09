class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int curr = 0, maxm = 0;
        for(int i = 0; i < gain.size(); i++) {
            curr += gain[i];
            maxm = max(curr, maxm);
        }
        return maxm;
    }
};
