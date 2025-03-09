class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        int cnt0 = 0;
        for(int i = 0; i < nums.size(); i++)
            if(!(nums[i]&1))
                cnt0++;
        int i;
        for(i = 0; i < cnt0; i++)
            nums[i] = 0;
        for(; i < nums.size(); i++)
            nums[i] = 1;
        return nums;
    }
};
