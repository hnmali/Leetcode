class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        vector<int> ans;
        for(int i = 0; i <= nums.size() - k; i++) {
            bool flag = true;
            int j;
            for(j = i+1; j < k+i; j++) {
                if(nums[j] != nums[j-1]+1) {
                    flag = false;
                    break;
                }
            }
            if(!flag)
                ans.push_back(-1);
            else
                ans.push_back(nums[j-1]);
        }
        return ans;
    }
};
