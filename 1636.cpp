bool customComparator(const pair<int, int>& a, const pair<int, int>& b) {
    if (a.first != b.first)
        return a.first < b.first;
    return a.second > b.second;
}
class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        vector<pair<int,int>> arr;
        sort(nums.begin(), nums.end());
        arr.push_back({1, nums[0]});
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i-1])
                arr.back().first++;
            else
                arr.push_back({1, nums[i]});
        }
        sort(arr.begin(), arr.end(), customComparator);
        int i = 0, j = 0;
        while (i < arr.size()) {
            while (arr[i].first--) { 
                nums[j] = arr[i].second;
                j++;
            }
            i++;
        }        
        return nums;
    }
};
