class Solution {
public:
    int scoreOfString(string s) {
        vector<int> sInt;
        for (int i = 0; i < s.length(); i++) {
            sInt.push_back(s[i]);    
        }
        int sum = 0;
        for (int i = 0; i < sInt.size() - 1; i++) {
            int diff = abs(s[i] - s[i + 1]);
            sum += diff;
        }
        return sum;
    }
};
