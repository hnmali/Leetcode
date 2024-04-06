class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size(), K = 0;
        vector<vector<int>> ans;
        for (int i = 0; i < n - 2; i++) {
            if ((i != 0) && (nums[i] == nums[i - 1]))
                continue;

            int j = i + 1, k = n - 1;
            while (j < k) {
                if (nums[i] + nums[j] + nums[k] == K) {
                    vector<int> temp;
                    temp.push_back(nums[i]);
                    temp.push_back(nums[j]);
                    temp.push_back(nums[k]);
                    ans.push_back(temp);

                    while (j < k) {
                        if (nums[j] == nums[j + 1])
                            j++;
                        else
                            break;
                    }
                    while (k > j) {
                        if (nums[k] == nums[k - 1])
                            k--;
                        else
                            break;
                    }
                    j++;
                    k--;
                } 
                else if (nums[i] + nums[j] + nums[k] > K)
                    k--;
                else
                    j++;
            }
        }
        return ans;
    }
};
