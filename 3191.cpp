class Solution {
public:
    int minOperations(vector<int>& nums) {
        int cnt = 0;
        for(int i = 0; i < nums.size()-2; i++) {
            if(nums[i] == 0) {
                cnt++;
                nums[i] = 1;
                nums[i+1] = nums[i+1] == 0 ? 1 : 0;
                nums[i+2] = nums[i+2] == 0 ? 1 : 0;
            }
        }
        if(nums.back() == 0 || nums[nums.size()-2] == 0)
            return -1;
        return cnt;
    }
};
