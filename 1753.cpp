class Solution {
public:
    int maximumScore(int a, int b, int c) {
        vector<int> nums(3);
        nums[0] = a;
        nums[1] = b;
        nums[2] = c;
        int ans = 0;
        while (true) {
            if ((!nums[0] and !nums[1]) or (!nums[1] and !nums[2]) or (!nums[0] and !nums[2]))
                break;
            sort(nums.begin(),nums.end());
            nums[1]--;
            nums[2]--;
            ans++;
        }
        return ans;
    }
};
