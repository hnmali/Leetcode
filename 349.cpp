class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> st1, st2;
        for(int i = 0; i < nums1.size(); i++)
            st1.insert(nums1[i]);
        for(int i = 0; i < nums2.size(); i++)
            st2.insert(nums2[i]);
        vector<int> ans;
        for(auto it : st1) {
            if(st2.find(it) != st2.end())
                ans.push_back(it);
        }
        return ans;
    }
};
