class Solution {
public:
    static bool customCompare(const vector<int>& a, const vector<int>& b) {
    if (a[1] != b[1]) 
        return a[1] > b[1];
    return a[0] > b[0];
}
    vector<int> maximumBeauty(vector<vector<int>>& items, vector<int>& queries) {
        sort(items.begin(), items.end(), customCompare);
        for(int i = 0; i < queries.size(); i++) {
            bool flag = true;
            for(int j = 0; j < items.size(); j++) {
                if(items[j][0] <= queries[i]) {
                    queries[i] = items[j][1];
                    flag = false;
                    break;
                }
            }
            if(flag)
                queries[i] = 0;
        }
        return queries;
    }
};
