class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size(), count = 0;
        if (nums[0]>=nums[n-1]) {
            for (int i=0; i<n-1; i++) {
                if (nums[i+1]<nums[i])
                    count++;
            }
            if(count<=1)
                return true;
            return false;
        }
        else {
            for (int i=0; i<n-1; i++) {
                if (nums[i+1]<nums[i])
                    return false;
            }
            return true;
        }
    }
};
