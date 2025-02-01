class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end(), greater<int>());
        int temp = nums[0]*nums[1]*nums[2];
        int n = nums.size();
        temp = max(temp,{nums[0]*nums[n-1]*nums[n-2]});
        return temp;
    }
};
