class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int bitSize = 1 << nums.size(), ans = 0;
        for (int i = 0; i < bitSize; i++) {
            int temp = 0;
            for (int j = 0; j < nums.size(); j++) {
                if ( i & (1 << j)) 
                    temp ^= nums[j];
            }
            ans += temp;
        }
        return ans;
    }
};
