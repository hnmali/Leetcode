class Solution {
public:
    int countValidSelections(vector<int>& nums) {
        int ans = 0, sum = 0;
        for(int i = 0; i < nums.size(); i++)
            sum += nums[i];
        int lSum = 0, rSum = sum;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                if (lSum - rSum >= 0 && lSum - rSum <= 1) 
                    ans++;
                if (rSum - lSum >= 0 && rSum - lSum <= 1) 
                    ans++;
            } 
            else {
                lSum += nums[i];
                rSum -= nums[i];
            }
        }
        return ans;
    }
};
