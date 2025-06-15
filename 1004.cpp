class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int s = 0, r = 0, cnt0 = 0, ans = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(cnt0 == k && nums[i] == 0) {
                while(nums[s] != 0)
                    s++;
                s++;
            }
            else if(cnt0 < k && nums[i] == 0)
                cnt0++;
            ans = max(i-s+1,ans);
        }
        return ans;
    }
};
