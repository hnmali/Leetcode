class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        if(nums.size() == k) {
            int maxm = nums[0];
            for(int i = 0; i < nums.size(); i++)
                maxm = max(nums[i], maxm);
            return maxm;
        }
        unordered_map<int, int> mp;
        for(int i = 0; i < nums.size(); i++)
            mp[nums[i]]++;
        if(k > 1) {
            if(mp[nums[0]] > 1 && mp[nums.back()] > 1)
                return -1;
            if(mp[max(nums[0],nums.back())] == 1)
                return max(nums[0],nums.back());
            if(mp[min(nums[0],nums.back())] == 1)
                return min(nums[0],nums.back());
        }
        int maxm = -1;
        for(auto it : mp) {
            if(it.second == 1)
                maxm = max(maxm, it.first);
        }
        return maxm;
    }
};
