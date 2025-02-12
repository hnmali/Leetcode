class Solution {
public:
    int digitSum(int n) {
        int sum = 0;
        while(n) {
            sum += n % 10;
            n /= 10;
        }
        return sum;
    }
    int maximumSum(vector<int>& nums) {
        vector<pair<int,int>> sum(nums.size());
        for(int i = 0; i < nums.size(); i++) {
            sum[i].first = digitSum(nums[i]);
            sum[i].second = nums[i];
        }
        sort(sum.begin(),sum.end());
        int ans = -1;
        for(int i = sum.size()-2; i >= 0; i--) 
            if(sum[i].first == sum[i+1].first)
                ans = max(ans,(sum[i].second + sum[i+1].second));
        return ans;
    }
};
