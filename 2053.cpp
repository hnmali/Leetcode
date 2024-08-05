class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        for (int i = 0; i < arr.size(); i++) {
            bool flag = true;
            for (int j = 0; j < arr.size(); j++) {  
                if (i != j && arr[i] == arr[j]) {
                    flag = false;
                    break;
                }
            }
            if (flag) {
                if (k == 1) 
                    return arr[i]; 
                else 
                    k--;
            }
        }
        return "";  
    }
};
