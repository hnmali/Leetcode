class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size(), cnt = 1;
        vector<int> ans;
        for(int i = 1; i < nums.size(); i++)
            if(nums[i] == nums[i-1])
                cnt++;
            else {
                if(cnt > n/3)
                    ans.push_back(nums[i-1]);
                cnt = 1;
            }
        if(cnt > n/3)
            ans.push_back(nums[n-1]);
        return ans;
    }
};
