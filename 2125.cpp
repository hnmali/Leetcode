class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int ans = 0;
        vector<int> lasers;
        for (int i = 0; i < bank.size(); i++) {
            int temp = 0;
            for (int j = 0; j < bank[i].size(); j++) {
                if (bank[i][j] == '1')
                    temp++;
            }
            if (temp)
                lasers.push_back(temp);
        }
        for (int i = 0; !lasers.empty() && i < lasers.size() - 1; i++)
            ans = ans + (lasers[i] * lasers[i + 1]);
        return ans;
    }
};
