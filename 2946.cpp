class Solution {
public:
    void reverse(vector<int>& arr, int low, int high) {
        while (low < high) {
            swap(arr[low], arr[high]);
            low++;
            high--;
        }
    }
    void rotateArr(vector<int>& arr, int n, int direction, int k) {
        if (direction == 1) 
            k = n - k;
        reverse(arr, 0, k - 1);  
        reverse(arr, k, n - 1);  
        reverse(arr, 0, n - 1);  
    }

    bool areSimilar(vector<vector<int>>& mat, int k) {
        int n = mat[0].size(), m = mat.size();
        if (k % n == 0)
            return true;
        else
            k %= n;
        for (int i = 0; i < m; i++) {
            vector<int> temp = mat[i];
            rotateArr(temp, n, i & 1, k);  
            if (temp != mat[i]) 
                return false;
        }
        return true;
    }
};
