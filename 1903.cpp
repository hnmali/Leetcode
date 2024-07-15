class Solution {
public:
    string largestOddNumber(string num) {
        string ans, temp;
        for (int i = 0; i < num.length(); i++) {
            temp.push_back(num[i]);
            if ((num[i]-'0')&1)
                ans = temp;
        }
        return ans;
    }
};
