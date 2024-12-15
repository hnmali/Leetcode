class Solution {
public:
    int distinctPrimeFactors(vector<int>& nums) {
        vector<bool> factors(1001,0);
        for(int i = 0; i < nums.size(); i++) {
            for(int j = 2; j * j <= nums[i]; j++) {
                while(nums[i]%j == 0) {
                    factors[j] = true;
                    nums[i] /= j;
                }
            }
            if(nums[i]>1)
                factors[nums[i]] = true;
        }
        int cnt = 0;
        for(int i = 0; i < 1001; i++)
            if(factors[i])
                cnt++;
        return cnt;
    }
};
