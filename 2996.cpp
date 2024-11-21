class Solution {
public:
    int missingInteger(vector<int>& nums) {
        if(nums.size() == 1)
            return nums[0]+1;
        int i, sum = nums[0];
        for(i = 1; i < nums.size(); i++) {
            if(nums[i] == nums[i-1]+1)
                sum += nums[i];
            else
                break;
        }
        sort(nums.begin(),nums.end());
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i]==sum)
                sum++;
            if(nums[i]>sum)
                return sum;
        }
        return sum;
    }
};
