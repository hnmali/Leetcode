class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        vector<int> ans;
        for (int i = 0; i < code.size(); i++) {
            int temp = 0, j = i + 1, kOrg = k, l = i - 1;
            if (k >= 0) {
                while (kOrg) {
                    if (j >= code.size())
                        j = 0;
                    temp += code[j++];
                    kOrg--;
                }
            }
            else {
                while (kOrg) {
                    kOrg++;
                    if (l < 0)
                        l = code.size() - 1;
                    temp += code[l--];
                }
            }
            ans.push_back(temp);
        }
        return ans;
    }
};
