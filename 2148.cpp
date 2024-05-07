class Solution {
public:
    int countElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int start = 0, end = nums.size() - 1;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[i-1] )
                break;
            start++;
        }
        if (start == nums.size()-1)
            return 0;
        for (int j = end; j > 0; j--) {
            if (nums[j] != nums[j-1])
                break;
            end--;
        }
        return end - start - 1;
    }
};
