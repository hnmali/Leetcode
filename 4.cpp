class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size(), n = nums2.size();
        if(m > n) 
            return findMedianSortedArrays(nums2, nums1);
        int l = 0, h = m;
        int mid = (m+n+1)/2;
        while(l <= h) {
            int m1 = l + (h - l)/2;
            int m2 = mid - m1;
            int l1 = INT_MIN, l2 = INT_MIN, r1 = INT_MAX, r2 = INT_MAX;
            if(m1 < m)
                r1 = nums1[m1];
            if(m2 < n)
                r2 = nums2[m2];
            if(m1-1 >= 0)
                l1 = nums1[m1-1];
            if(m2-1 >= 0)
                l2 = nums2[m2-1];
            if(l1 <= r2 && l2 <= r1) {
                if((n+m)&1)
                    return max(l1, l2);
                return (double)(max(l1,l2) + min(r1,r2))/2.0;
            }
            else if(l1 > r2)
                h = m1 - 1;
            else
                l = m1 + 1;
        }
        return 0;
    }
};
