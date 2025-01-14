class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        unordered_map<int,int> mp;
        vector<int> ans(A.size());
        for(int i = 0; i < A.size(); i++) {
            int cnt = 0;
            mp[A[i]]++;
            mp[B[i]]++;
            for(auto i: mp) {
                if(i.second == 2)
                    cnt++;
            }
            ans[i] = cnt;
        }
        return ans;
    }
};
