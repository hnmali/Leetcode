class Solution {
public:
    int getNumOfBouquets(vector<int>& bloomDay, int mid, int k) {
        int numOfBouquets = 0, count = 0;
        for (int i = 0; i < bloomDay.size(); i++) {
            if (bloomDay[i] <= mid) 
                count++;
            else 
                count = 0;
            if (count == k) {
                numOfBouquets++;
                count = 0;
            }
        }
        return numOfBouquets;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int start = 0, end = 0;
        for (int i = 0; i < bloomDay.size(); i++) 
            end = max(end, bloomDay[i]);
        int minDays = -1;
        while (start <= end) {
            int mid = (start + end) / 2;
            if (getNumOfBouquets(bloomDay, mid, k) >= m) {
                minDays = mid;
                end = mid - 1;
            }
            else 
                start = mid + 1;
        }
        return minDays;
    }
};
