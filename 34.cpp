class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int l = 0, r = nums.size()-1;
        int lOccur = -1, rOccur = -1;
        while(l <= r) {
            int mid = (l+r)/2;
            if(nums[mid] == target) {
                lOccur = mid;
                r = mid - 1;
            }
            else if(nums[mid] > target) 
                r = mid - 1;
            else
                l = mid + 1;
        }
        if(lOccur == -1)
            return {-1, -1};
        l = 0;
        r = nums.size()-1;
        while(l <= r) {
            int mid = (l+r)/2;
            if(nums[mid] == target) {
                rOccur = mid;
                l = mid + 1;
            }
            else if(nums[mid] > target) 
                r = mid - 1;
            else
                l = mid + 1;
        }
        return {lOccur, rOccur};
    }
};
