class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
        long long cnt01 = 0, cnt02 = 0, sum1 = 0, sum2 = 0;
        for(long long i = 0; i < nums1.size(); i++) {
            if(nums1[i] == 0)
                cnt01++;
            else
                sum1 += nums1[i];
        }
        for(long long i = 0; i < nums2.size(); i++) {
            if(nums2[i] == 0)
                cnt02++;
            else
                sum2 += nums2[i];
        }
        sum1 += cnt01;
        sum2 += cnt02;
        if ((cnt01 == 0 && sum1 < sum2) || (cnt02 == 0 && sum2 < sum1)) 
            return -1;
        return max(sum1, sum2);
    }
};
