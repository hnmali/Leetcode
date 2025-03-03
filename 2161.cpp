class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> less, greater;
        int equal = 0;
        for(int i = 0; i < nums.size(); i++) 
            if(nums[i] < pivot)
                less.push_back(nums[i]);
            else if(nums[i] == pivot)
                equal++;
            else
                greater.push_back(nums[i]);
        int curr = 0;
        for(int i = 0; i < less.size(); i++,curr++)
            nums[curr] = less[i];
        while(equal--)
            nums[curr++] = pivot;
        for(int i = 0; i < greater.size(); i++,curr++)
            nums[curr] = greater[i];
        return nums;
    }
};
