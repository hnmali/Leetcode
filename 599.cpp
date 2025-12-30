class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map<string, int> mp;
        for (int i = 0; i < list1.size(); i++) 
            mp[list1[i]] = i;
        vector<string> res;
        int minSum = INT_MAX;
        for (int j = 0; j < list2.size() && j <= minSum; j++) {
            if (mp.count(list2[j])) {
                int sum = j + mp[list2[j]];
                if (sum < minSum) {
                    res.clear();
                    res.push_back(list2[j]);
                    minSum = sum;
                } 
                else if (sum == minSum) 
                    res.push_back(list2[j]);
            }
        }
        return res;
    }
};
