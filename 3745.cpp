class Solution {
public:
    int maximizeExpressionOfThree(vector<int>& nums) {
        int a = nums[0], b = nums[1], c = nums[0];
        for(int i = 1; i < nums.size(); i++) {
            c = min(c, nums[i]);
            if(nums[i] > a) {
                b = a;
                a = nums[i];
            }
            else
                b = max(nums[i], b);
        }
        cout << a << b << c;
        return a + b - c;
    }
};
