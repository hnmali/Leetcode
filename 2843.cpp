class Solution {
public:
    bool isSymm (string num) {
        int n = num.length();
        if (n&1)
            return false;
        int first = 0, sec = 0;
        for (int i = 0; i < n/2; i++)
            first += num[i] - '0';
        for (int i = n/2; i < n; i++)
            sec += num[i] -'0';
        return first == sec;
    }
    int countSymmetricIntegers(int low, int high) {
        int ans = 0;
        for (int i = low; i <= high; i++) {
            string temp = to_string(i);
            if(isSymm(temp))
                ans++;
        }
        return ans;
    }
};
