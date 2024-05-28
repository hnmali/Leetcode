class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        string ans;
        int cnt = 0;
        for (int i = 0; i < s.length(); i++)
            if (s[i] == '1')
                cnt++;
        for (int i = 1; i < cnt; i++)
            ans.push_back('1');
        for (int i = 0; i < s.length()-cnt; i++)
            ans.push_back('0');
        ans.push_back('1');
        return ans;
    }
};
