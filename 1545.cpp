class Solution {
public:
    string update(string &s) {
        for(int i = 0; i < s.length(); i++)
            s[i] == '0'?s[i]='1':s[i]='0';
        for(int i = 0, j = s.length()-1; i < j; i++,j--)
            swap(s[i],s[j]);
        return s;
    }
    char findKthBit(int n, int k) {
        if(n == 1)
            return '0';
        string s = "0";
        for(int i = 2; i <= n; i++) {
            string temp = (s+"1") + update(s);
            s = temp;
        }
        return s[k-1];
    }
};
