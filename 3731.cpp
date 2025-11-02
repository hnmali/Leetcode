class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> freq(101,0), ans;
        int minm = 101, maxm = 0;
        for(int i = 0; i < nums.size(); i++) {
            freq[nums[i]]++;
            minm = min(minm, nums[i]);
            maxm = max(maxm, nums[i]);
        }
        for(int i = minm; i <= maxm; i++) 
            if(!freq[i])
                ans.push_back(i);
        return ans;
    }
};
