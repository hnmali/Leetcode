class Solution {
public:
    int returnToBoundaryCount(vector<int>& nums) {
        int ans = 0, sum = 0;
        for(int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            if(sum == 0) 
                ans++;
        }
        return ans;
    }
};
