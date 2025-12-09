class Solution {
public:
    vector<int> sortByReflection(vector<int>& nums) {
        vector<pair<int, int>> vp;
        for (int i = 0; i < nums.size(); i++) {
            string s;
            int t = nums[i];
            while (t) {
                s.push_back(char('0' + (t & 1)));
                t >>= 1;
            }
            if (s.empty())
                s = "0";
            int val = stoi(s, nullptr, 2);
            vp.push_back({val, nums[i]});
        }
        sort(vp.begin(), vp.end());
        for (size_t i = 0; i < nums.size(); ++i)
            nums[i] = vp[i].second;
        return nums;
    }
};
