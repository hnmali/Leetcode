class Solution {
public:
    string convertToTitle(int colNum) {
        string ans;
        while (colNum) {
            colNum--;
            int rem = colNum % 26;
            ans = char('A'+rem) + ans;
            colNum /= 26;
        }
        return ans;
    }
};
