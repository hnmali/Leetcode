class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int ans = 0;
        for (int i = 0; i < strs[0].size(); i++ ) {
            vector<int> temp;
            for (int j = 0; j < strs.size(); j++ ) 
                temp.push_back(strs[j][i]);
            for (int k = 0; k < temp.size() - 1; k++ ) {
                if ( temp[k] > temp[k + 1]) {
                    ans++;
                    break;
                }
            }
        }
        return ans;
    }
};
