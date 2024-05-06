class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int i = 1;
        vector<int> missing;
        for(int j = 0; j < arr.size(); i++) {
            if (i == arr[j]) {
                j++;
                continue;
            }
            missing.push_back(i);
        }
        if (missing.size() < k) 
            return k - missing.size() + arr.back();
        return missing[k-1];
    }
};
