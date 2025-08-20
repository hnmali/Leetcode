class Solution {
public:
    bool canFinish(vector<int>& piles, int h, int k) {
        long long hours = 0;
        for (int i = 0; i < piles.size(); i++) {
            hours += piles[i] / k;
            if (piles[i] % k != 0) 
                hours++;
            if (hours > h) 
                return false;
        }
        return hours <= h;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1, right = -1;
        for(int i = 0; i < piles.size(); i++) 
            right = max(right, piles[i]);
        int ans = right;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (canFinish(piles, h, mid)) {
                ans = mid;
                right = mid - 1;
            } 
            else 
                left = mid + 1;
        }
        return ans;
    }
};
