class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0)
            return 0;
        int cnt = 1, curr = 1;
        sort(nums.begin(), nums.end());
        for(int i = 1; i < nums.size(); i++) {
            if((nums[i-1]+1) == nums[i])
                curr++;
            else if(nums[i-1] == nums[i])
                curr = curr;
            else
                curr = 1; 
            cnt = max(cnt, curr);
        }
        return cnt;
    }
};
