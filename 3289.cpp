class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int> ans;
        int j = 0;
        sort(nums.begin(),nums.end());
        for (int i = 0; i < nums.size(); i++,j++) {
            if (nums[i] != j) 
                ans.push_back(--j);
            if (ans.size() == 2)
                break;                
        }
        return ans;
    }
};
