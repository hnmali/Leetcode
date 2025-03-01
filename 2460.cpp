class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        for(int i = 0; i < nums.size()-1; i++) 
            if(nums[i] == nums[i+1]) {
                nums[i] *= 2;
                nums[i+1] = 0;
            }
        vector<int> ans(nums.size());
        int curr = 0;
        for(int i = 0; i < nums.size(); i++)
            if(nums[i])
                ans[curr++] = nums[i];
        for(;curr < ans.size(); curr++)
            ans[curr] = 0;
        return ans;
    }
};
