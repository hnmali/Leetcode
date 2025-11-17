class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int curr = 0, i = 0;
        while(i < nums.size() && !nums[i])
            i++;
        i++;
        for(; i < nums.size(); i++)
            if(nums[i] && curr < k)
                return false;
            else if(nums[i])
                curr = 0;
            else
                curr++;
        return true;            
    }
};
