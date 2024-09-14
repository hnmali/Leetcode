class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int maxm = nums[0], ans = 0, currCnt = 0;
        for (int i = 1; i < nums.size(); i++)
            maxm = max(nums[i],maxm);
        for (int i = 0; i < nums.size(); i++) {
            if(nums[i] == maxm)
                currCnt++;
            else
                currCnt = 0;
            ans = max(ans,currCnt);
        }
        return ans;
    }
};
