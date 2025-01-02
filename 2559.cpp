class Solution {
public:
    bool isVowel(char ch) {
        if(ch == 'a' || ch == 'e' || ch == 'i' ||
           ch == 'o' || ch == 'u')
            return true;
        return false;
    }
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        vector<int> preSum, ans(queries.size());
        for(int i = 0; i < words.size(); i++) {
            int temp = 0;
            if(isVowel(words[i][0]) && isVowel(words[i].back()))
                temp = 1;
            if(i != 0)
                temp += preSum.back();
            preSum.push_back(temp);
        }
        for (int i = 0; i < queries.size(); i++) {
            int left = queries[i][0];
            int right = queries[i][1];
            ans[i] = preSum[right] - (left > 0 ? preSum[left - 1] : 0);
        }
        return ans;
    }   
};
