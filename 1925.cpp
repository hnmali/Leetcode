class Solution {
public:
    int countTriples(int n) {
        int ans = 0;
        for (int a = 1; a <= n; a++) {
            for (int b = a + 1; b <= n; b++) {
                int c2 = a * a + b * b;
                int c = sqrt(c2);
                if (c * c == c2 && c <= n)
                    ans++;
            }
        }
        return 2*ans;
    }
};
