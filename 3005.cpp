class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        vector<int> cnt(101,0);
        for(int i = 0; i < nums.size(); i++) 
            cnt[nums[i]]++;
        sort(cnt.begin(),cnt.end(),greater<int>());
        int ans = cnt[0];
        for(int i = 1; i < 101; i++)
            if(cnt[i] == cnt[i-1])
                ans += cnt[0];
            else
                break;
        return ans;
    }
};
