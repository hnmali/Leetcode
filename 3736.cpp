class Solution {
public:
    int minMoves(vector<int>& nums) {
        int maxm = nums[0], mov = 0;
        for(int i = 1; i < nums.size(); i++)
            maxm = max(nums[i], maxm);
        for(int i = 0; i < nums.size(); i++)
            mov += maxm - nums[i];
        return mov;
    }
};
