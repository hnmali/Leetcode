class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        vector<int> freq(101);
        int sum = 0;
        for(int i = 0; i < nums.size(); i++)
            freq[nums[i]]++;
        for(int i = 0; i < 101; i++)
            if(freq[i] && freq[i]%k == 0)
                sum += (freq[i]*i);
        return sum;
    }
};
