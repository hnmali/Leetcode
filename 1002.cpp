class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<string> ans;
        for (int i = 0; i < words[0].size(); i++) {
            string temp;
            temp.push_back(words[0][i]);
            int count = 0;
            for (int j = 1; j < words.size(); j++) {
                bool flag = false;
                for (int k = 0; k < words[j].size(); k++) {
                    if (words[0][i] == words[j][k]) {
                        flag = true;
                        words[j][k] = ' ';
                        break;
                    }
                }
                if (flag)
                    count++;
            }
            if (count == words.size() - 1)

                ans.push_back(temp);
        }
        return ans;
    }
};
