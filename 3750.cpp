class Solution {
public:

    string reverse(string s) {
        int l = 0, r = s.size()-1;
        while(l < r) 
            swap(s[l++],s[r--]);
        return s;
    }

    string bit(int n) {
        string s;
        while(n) {
            int bit = n&1;
            s.push_back(bit+'0');
            n >>= 1;
        }
        return s;
    }
    
    int minimumFlips(int n) {
        string s = bit(n), ans = reverse(s);
        int cnt = 0;
        for(int i = 0; i < s.size(); i++) 
            if(s[i] != ans[i]) 
                cnt++;
        return cnt;
    }
};
