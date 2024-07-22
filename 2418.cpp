class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n = names.size();
        vector<pair<int, int>> key(n);
        for (int i = 0; i < n; i++)
            key[i] = {heights[i], i};
        vector<string> ans(n);
        sort(key.begin(), key.end(), greater<pair<int, int>>());
        for (int i = 0; i < n; i++) 
            ans[i] = names[key[i].second];
        return ans;
    }
};
