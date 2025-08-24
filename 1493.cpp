class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int maxm = 0, i = 0, j = 0, cnt0 = 0;
        while(i < nums.size()) {
            while(j < nums.size() && cnt0 == 2) {
                if(!nums[j])
                    cnt0--;
                j++;
            }
            if(!nums[i])
                cnt0++;
            i++;
            maxm = max(maxm, i-j-cnt0);
        }
        if(maxm == nums.size())
            return maxm-1;
        return maxm;
    }
};
