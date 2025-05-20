class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int> temp(nums.size()+1);
        for(int i = 0; i < queries.size(); i++) {
            temp[queries[i][0]]--;
            temp[queries[i][1]+1]++;
        }
        int sum = 0;
        for(int i = 0; i < nums.size(); i++) {
            sum += temp[i];
            if((nums[i] + sum) > 0)
                return false;
        }
        return true;
    }
};
