class Solution {
public:
    int points(string&s, string pat, int x) {
        int cnt = 0, j = 0;
        for(int i = 0; i < s.size(); i++) {
            s[j++] = s[i];
            if(j > 1 && s[j-2] == pat[0] && s[j-1] == pat[1]) {
                cnt += x;
                j -= 2;
            }
        }
        s.resize(j);
        return cnt;
    }
    int maximumGain(string s, int x, int y) {
        string a = "ab", b = "ba";
        if(x < y) {
            swap(a,b);
            swap(x,y);
        }
        return points(s, a, x) + points(s, b, y);
    }
};
