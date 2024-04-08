class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int> odd, even;
        for (int i = 0; i < nums.size(); i++) {
            if (i & 1)
                odd.push_back(nums[i]);
            else
                even.push_back(nums[i]);
        }
        sort(even.begin(), even.end());
        sort(odd.begin(), odd.end());
        int j = odd.size() - 1, k = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (i & 1) {
                nums[i] = odd[j];
                j--;
            }
            else {
                nums[i] = even[k]; 
                k++;
            }
        }
        return nums;
    }
};
