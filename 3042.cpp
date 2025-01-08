class Solution {
public:
    bool isPrefixAndSuffix(string str1, string str2) {
        if (str1.length() > str2.length())
            return false;
        for (int i = 0, j = str2.length() - str1.length(); i < str1.length(); i++, j++) {
            if (str1[i] != str2[i] || str1[i] != str2[j])
                return false;
        }
        return true;
    }
    int countPrefixSuffixPairs(vector<string>& words) {
        int ans = 0;
        for (int i = 0; i < words.size(); i++) {
            for (int j = i + 1; j < words.size(); j++) {
                if(isPrefixAndSuffix(words[i], words[j]))
                ans++;
            }
        }
        return ans;
    }
};
