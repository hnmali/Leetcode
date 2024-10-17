class Solution {
public:
    int maximumSwap(int num) {
        string s = to_string(num);
        for (int j = 0; j < s.length() - 1; j++) {
            char temp = s[j];
            int k = 0;
            for (int i = j + 1; i < s.length(); i++) {
                if (s[i] >= temp) {
                    k = i;
                    temp = s[i];
                }
            }
            if (temp != s[j]) {
                swap(s[j], s[k]);
                return stoi(s);
            }
        }
        return num;
    }
};
