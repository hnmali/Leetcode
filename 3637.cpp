class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int i = 1;
        while(i < nums.size() && nums[i-1] < nums[i])
            i++;
        if(i == nums.size() || i == 1)
            return false;
        while(i < nums.size() && nums[i-1] > nums[i])
            i++;
        if(i == nums.size())
            return false;
        while(i < nums.size() && nums[i-1] < nums[i])
            i++;
        if(i == nums.size())
            return true;
        return false;
    }
};
