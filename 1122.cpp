class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> count(1001);
        for (int i = 0; i < arr1.size(); i++)
            count[arr1[i]]++;
        int j = 0;
        for (int i = 0; i < arr2.size(); i++) {
            while(count[arr2[i]] > 0){
                count[arr2[i]]--;
                arr1[j] = arr2[i];
                j++;
            }
        }
        for (int i = 0; i < 1001; i++) {
            while(count[i] > 0){
                arr1[j] = i;
                count[i]--;
                j++;
            }
        }
        return arr1;
    }
};
