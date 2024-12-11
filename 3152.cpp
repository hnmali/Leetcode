class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& q) {
        vector<bool> ans(q.size()), parity(nums.size(),1);
        vector<int> prefixSum(nums.size());
        int cnt = 0;
        for(int i = 1; i < nums.size(); i++) 
            if((nums[i-1]&1) == (nums[i]&1))
                parity[i] = false;
        for(int i = 0; i < nums.size(); i++)  {
            if(parity[i])
                prefixSum[i] = ++cnt;
            else
                prefixSum[i] = cnt;
        }
        for(int i = 0; i < q.size(); i++) {
            int range = q[i][1] - q[i][0] + 1;
            int temp = prefixSum[q[i][1]] - prefixSum[q[i][0]] + 1;
            ans[i] = (range == temp);
        }
        return ans;        
    }
};
