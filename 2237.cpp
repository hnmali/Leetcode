class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string> copy = words;
        vector<bool> index(words.size(),1);
        for (int i = 0; i < copy.size(); i++) {
            sort(copy[i].begin(), copy[i].end());
        }
        for (int i = 1; i < copy.size(); i++) {
                if (copy[i] == copy[i-1]) 
                    index[i] = false;
        }
        vector<string> ans;
        for (int i = 0; i < index.size(); i++) {
            if (index[i]) {
                ans.push_back(words[i]);
            }
        }
        return ans;
    }
};
