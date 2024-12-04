class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) {
        int j = 0;
        for(int i = 0; i < str1.length(); i++) {
            if(j == str2.length())
                break;
            if(str1[i] == str2[j] || str1[i]+1 == str2[j])
                j++;
            else if(str1[i] == 'z' and str2[j] == 'a')
                j++;
        }
        return j == str2.length();
    }
};
