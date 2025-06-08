class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {        
        int n = nums.size(), l = 1, h = nums[0];
        for(int i = 1; i < n; i++)
            h = max(nums[i],h);
        while(l <= h){
            int mid = l+(h-l)/2;
            long sum = 0;
            for(int i = 0; i < n; i++)
                sum += (nums[i]+mid-1)/mid;
            if(sum <= threshold)
                h = mid-1;
            else
                l=mid+1;
        }
        return l;
    }
};
