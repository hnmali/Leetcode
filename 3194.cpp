class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        vector<float> avg;
        sort(nums.begin(),nums.end());
        int i = 0, j = nums.size()-1;
        while (i < (nums.size()/2)) {
            float temp = float(nums[i++] + nums[j--])/2;
            avg.push_back(temp);
        }
        sort(avg.begin(), avg.end());
        return avg[0];
    }
};
