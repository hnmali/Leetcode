class Solution {
public:
    int maximumCandies(vector<int>& candies, long long k) {
        long long left = 1, right = candies[0];
        for(int i = 1; i < candies.size(); i++)
            right = max(right,(long long)candies[i]);
        int result = 0;
        while (left <= right) {
            long long mid = left + (right - left) / 2;
            long long childCnt = 0;
            for(int i = 0; i < candies.size(); i++)
                childCnt += candies[i]/mid;
            if (childCnt >= k) {
                result = mid;
                left = mid + 1;
            } 
            else 
                right = mid - 1;
        }
        return result;
    }
};
