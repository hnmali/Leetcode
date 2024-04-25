class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> ans;
        int j = 1;
        for (int i = 0; i < nums.size(); i++) {
            if(i > 0 && nums[i-1] == nums[i])
               continue;
            if(nums[i] != j) {
                ans.push_back(j);
                i--;
            }
            j++;
        }
        while (j <= nums.size())
            ans.push_back(j++);
        return ans;
    }
};
