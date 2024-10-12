class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        vector<int> ans;
        for(int i = 0; i < nums.size(); i++) {
            int j = 0, flag = 1;
            while(j < nums[i]) {
                if((j|j+1) == nums[i]) {
                    ans.push_back(j);
                    flag = 0;
                    break;
                }
                j++;
            }
            if(flag)
                ans.push_back(-1);
        }
        return ans;
    }
};
