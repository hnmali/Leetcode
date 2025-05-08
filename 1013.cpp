class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        long long int sum = 0, temp = 0;
        int maxm = 0, cnt = 0;
        for(int i = 0; i < arr.size(); i++) {
            maxm = max(arr[i],maxm);
            sum += arr[i];
        }
        if (sum % 3 != 0)
            return false;
        sum = sum / 3;
        if (maxm == 0)
            return true;
        for (int i = 0; i < arr.size(); i++) {
            if (cnt == 2) {
                while (i != arr.size() - 1) {
                    temp = temp + arr[i];
                    i++;
                }
                if (floor(sum) == temp) {
                    cnt++;
                    break;
                }
            }
            temp = temp + arr[i];
            if (floor(sum) == temp) {
                cnt++;
                temp = 0;
            }
        }
        if (cnt == 3)
            return true;
        return false;
    }
};
