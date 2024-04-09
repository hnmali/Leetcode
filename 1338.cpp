class Solution {
public:
    int minSetSize(vector<int>& arr) {
        vector<pair<int,int>> count;
        sort(arr.begin(), arr.end());
        count.push_back({1,arr[0]});
        int j = 0;
        for (int i = 1; i < arr.size(); i++) {
            if (arr[i - 1] == arr[i]) {
                pair<int, int> temp = count[j];
                temp.first++;
                count[j] = temp;
            }
            else {
                pair<int,int> temp;
                temp = {1, arr[i]};
                count.push_back(temp);
                j++;
            }
        }
        sort(count.begin(), count.end());
        int n = arr.size();
        int diff = 0, ans = 0;
        while (diff < (n/2)) {
            ans++;
            diff += count[count.size() - ans].first;
        }
        return ans;
    }
};
