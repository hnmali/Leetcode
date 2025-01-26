class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int numsSum = nums[0];
        for(int i = 1; i < nums.size(); i++)
            numsSum += nums[i];
        int currSum = 0, cnt = 0;
        for(int i = 0; i < nums.size()-1; i++) {
            currSum += nums[i];
            int diff = currSum - (numsSum - currSum);
            if(!(diff&1))
                cnt++;
        }
        return cnt;
    }
};
