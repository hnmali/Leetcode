class Solution {
public:
    int semiOrderedPermutation(vector<int>& nums) {
        int x, y, n = nums.size();
        for (int i = 0; i < n; i++) {
            if (nums[i] == 1)
                x = i;
            if  (nums[i] == n)
                y = i;
        }
        if (x < y) 
            return x + (n-y-1);
        else
            return x + (n-y-1) - 1;
    }
};
