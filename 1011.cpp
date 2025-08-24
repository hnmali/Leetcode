class Solution {
public:
    bool isPossible(vector<int>& w, int days, int mid) {
        int day = 1, curr = 0;
        for(int i = 0; i < w.size(); i++) {
            if((curr + w[i]) > mid) {
                curr = 0;
                day++;
            } 
            curr += w[i];
        }
        return day <= days;
    }
    int shipWithinDays(vector<int>& w, int days) {
        int l = w[0], r = w[0];
        for(int i = 1; i < w.size(); i++) {
            l = max(l, w[i]);
            r += w[i];
        }
        while(l < r) {
            int mid = l + (r-l)/2;
            if(isPossible(w, days, mid)) 
                r = mid;
            else
                l = mid + 1;
        }
        return l;
    }
};
