class Solution {
public:
    int maxOperations(vector<int>& nums) {
        int ans = 0, sum = nums[0]+nums[1];
        for(int i = 0; i+1 < nums.size(); i+=2,ans++)
            if(nums[i]+nums[i+1] != sum)
                break;  
        return ans;
    }
};
