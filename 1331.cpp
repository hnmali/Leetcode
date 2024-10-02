class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        if (arr.empty()) return {};
        vector<pair<int, int>> sortedArr;
        for (int i = 0; i < arr.size(); i++) {
            sortedArr.push_back({arr[i], i});
        }
        sort(sortedArr.begin(), sortedArr.end());
        vector<int> ranks(arr.size());
        int rank = 1;
        ranks[sortedArr[0].second] = rank;
        for (int i = 1; i < sortedArr.size(); i++) {
            if (sortedArr[i].first != sortedArr[i - 1].first) 
                rank++;
            ranks[sortedArr[i].second] = rank;
        }
        return ranks;
    }
};
