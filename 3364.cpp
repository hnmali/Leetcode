class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int ans = -1;
        for (int j = l; j <= r; j++) {
            for (int i = 0; i <= nums.size()-j; i++) {
            int sum = 0;
                for(int k = i; k < i+j; k++) 
                    sum += nums[k];
                if(ans == -1 and sum > 0)
                    ans = sum;
                if(sum>0)
                    ans = min(ans,sum);
            }
        }
        return ans;
    }
};
