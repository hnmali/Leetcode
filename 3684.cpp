class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end(), greater<int>());
        vector<int> ans;
        int i = 1;
        k--;
        ans.push_back(nums[0]);
        while(k && i < nums.size()) {
            if(nums[i-1] != nums[i]) {
                k--;
                ans.push_back(nums[i]);
            }
                i++;
        }
        return ans;
    }
};
