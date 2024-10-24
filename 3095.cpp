class Solution {
public:
    int minimumSubarrayLength(vector<int>& nums, int k) {
        int ans = 5000;
        for(int i = 0; i < nums.size(); i++) {
            int temp = 0, len = 0;
            for(int j = i; j <nums.size(); j++) {
                temp |= nums[j];
                len++;
                if(temp>=k) {
                    ans = min(ans,len);
                    break;
                }
            }
        }
        if(ans == 5000)
            return -1;
        return ans;
    }
};
