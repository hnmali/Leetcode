class Solution {
public:
    bool isPrime(int n) {
        if (n <= 1) return false;
        for (int i = 2; i * i <= n; i++)
            if (n % i == 0)
                return false;
        return true;
    }

    int diagonalPrime(vector<vector<int>>& nums) {
        int size = nums.size();
        int ans = 0;
        for (int i = 0; i < size; i++) {
            if (isPrime(nums[i][i]))
                ans = max(nums[i][i], ans);
            int j = size - i - 1;
            if (isPrime(nums[i][j]))
                ans = max(nums[i][j], ans);
        }
        return ans;
    }
};
