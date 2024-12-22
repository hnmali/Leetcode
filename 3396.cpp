class Solution {
public:
    bool isDistinct(vector<int> nums) {
        sort(nums.begin(), nums.end());
        for (int i = 1; i < nums.size(); i++)
            if (nums[i] == nums[i - 1])
                return false;
        return true;
    }
    int minimumOperations(vector<int>& nums) {
        if (isDistinct(nums)) 
            return 0;
        int cnt = 0;
        while (!nums.empty()) {
            if (isDistinct(nums)) 
                break; 
            cnt++;
            vector<int> temp;
            for (int i = 3; i < nums.size(); i++) 
                temp.push_back(nums[i]);
            nums = temp; 
        }
        return cnt;
    }
};
