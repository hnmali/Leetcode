class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int x = 0, ans = 0;
        for(int i = 0; i < nums.size(); i++) 
            x ^= nums[i];
        bitset<32> binaryXor(x);
        bitset<32> binaryK(k);
        for(int i = 0; i < 32; i++) {
            if(binaryXor[i] != binaryK[i])
                ans++;
        }
        return ans;
    }
};
