class Solution {
public:
    vector<string> stringSequence(string target) {
        vector<string> ans;
        string temp;
        for(int i = 0; i < target.size(); i++) {
            string curr = temp;
            curr.push_back('a'-1);
            do {
                curr[i]++;
                ans.push_back(curr);
            } while (curr[i] != target[i]);
            temp = curr;
        }
        return ans;
    }
};
