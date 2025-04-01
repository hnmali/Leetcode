class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        if(k == 1)
            return 0;
        sort(nums.begin(),nums.end());
        int diff = 100001;
        for(int i = nums.size()-1; i >= k-1; i--) 
            diff = min(diff,nums[i]-nums[i-k+1]);
        return diff;
    }
};
