class Solution {
public:
    int reverse(int n) {
        int ans = 0;
        while (n) {
            int rem = n % 10;
            ans = ans * 10 + rem;
            n /= 10;
        }
        return ans;
    }
    int countDistinctIntegers(vector<int>& nums) {
        unordered_set<int> uoSet;
        for (int i = 0; i < nums.size(); i++)
            uoSet.insert(nums[i]);
        for (int i = 0; i < nums.size(); i++) {
            int temp = reverse(nums[i]);
            uoSet.insert(temp);
        }
        return uoSet.size();
    }
};
