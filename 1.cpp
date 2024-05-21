class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        if (arr.size() == 2) 
            return {0,1};
        vector<pair<int,int>> nums;
        for (int i = 0; i < arr.size(); i++) 
            nums.push_back({arr[i],i});
        sort(nums.begin(), nums.end());
        int i = 0, j = nums.size()-1;
        while (i < j) {
            if ((nums[i].first + nums[j].first) == target)
                return {nums[i].second,nums[j].second};
            else if (nums[i].first + nums[j].first < target)
                i++;
            else
                j--;
        }
        return {};
    }         
};
