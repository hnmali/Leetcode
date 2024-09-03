class Solution {
public:
    int getLucky(string s, int k) {
        string num;
        int ans = 0;
        for (int i = 0; i < s.length(); i++) {
            int temp = s[i]-'a'+1;
            num += to_string(temp);
        }
        for (int i = 0; i < num.length(); i++)
            ans += num[i] - '0';
        k--;
        while (k--) {
            int sum = 0; 
            while (ans) {
                int rem = ans%10;
                sum += rem;
                ans /= 10;
            }
            ans = sum;
        }
        return ans;        
    }
};
