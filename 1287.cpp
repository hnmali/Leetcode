class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int count = arr.size() * 0.25, tempCount = 1;
        for (int i = 1; i < arr.size(); i++) {
            if (tempCount > count)
                return arr[i-1];
            if (arr[i-1] == arr[i])
                tempCount++;
            else
                tempCount = 1;
        }
        return arr[arr.size()-1];
    }
};
