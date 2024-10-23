class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int lenI = 1, lenD = 1;
        int currI = 1, currD = 1;
        for (int i = 1; i < nums.size(); i++) {
            if(nums[i] > nums[i-1])
                currI++;
            else
                currI = 1;
            if(nums[i] < nums[i-1])
                currD++;
            else
                currD = 1;
            lenI = max(lenI,currI);
            lenD = max(lenD,currD);
        }
        return max(lenI,lenD);
    }
};
