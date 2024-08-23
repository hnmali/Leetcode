class Solution {
public:
    int lcmOfTwo(int a, int b) {
        return (a / gcd(a, b)) * b;
    }
    int lcm(vector<int> dem) {
        int result = 1;
        for (int num : dem) 
            result = lcmOfTwo(result, num); 
        return result;
    }
    string fractionAddition(string s) {
        vector<int> num, dem;
        int i = 0;
        while (i < s.length()) {
            int numerator = 0, sign = 1;
            if (s[i] == '-') {
                sign = -1;
                i++;
            } 
            else if (s[i] == '+')
                i++;
            while (i < s.length() && isdigit(s[i])) {
                numerator = numerator * 10 + (s[i] - '0');
                i++;
            }
            numerator *= sign;
            num.push_back(numerator);
            i++;
            int denominator = 0;
            while (i < s.length() && isdigit(s[i])) {
                denominator = denominator * 10 + (s[i] - '0');
                i++;
            }
            dem.push_back(denominator);
        }
        int newDem = lcm(dem), ans = 0;
        for (int i = 0; i < num.size(); i++) {
            int temp;
            temp = newDem / dem[i];
            ans += temp*num[i];
        }
        int gcd = std::gcd(abs(ans), newDem);
        ans /= gcd;
        newDem /= gcd;
        return {to_string(ans)+'/'+to_string(newDem)};
    }
};
