class Solution {
public:
    int maxSum(vector<int>& nums) {
        vector<int> visit(101,true);
        int maxm = nums[0], sum = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] >= 0 && visit[nums[i]]) {
                sum += nums[i];
                visit[nums[i]] = false;
            }
            maxm = max(nums[i],maxm);
        }
        if(maxm < 0 && !visit[0])
            return 0;
        if(maxm < 0)
            return maxm;
        return sum;
    }
};
