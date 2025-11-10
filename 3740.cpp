class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int minm = 1001;
        for(int i = 0; i < nums.size(); i++) 
            for(int j = i+1; j < nums.size(); j++) 
                if(nums[i] == nums[j])
                    for(int k = j+1; k < nums.size(); k++)
                        if(nums[j] == nums[k])
                            minm = min(minm, abs(i - j) + abs(j - k) + abs(k - i));
        return minm == 1001 ? -1 : minm;
    }
};
