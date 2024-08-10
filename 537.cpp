class Solution {
public:
    pair<int,int> complexToInt(string& s) {
        int a = 0, b = 0, i;
        bool sign = 0;
        for(i = 0; s[i] != '+'; i++) { 
            if (s[i] == '-') continue;
            a = a*10 + (s[i] - '0');
        }
        if (s[0] == '-')
            a = -a;
        i++;
        for (; s[i] != 'i'; i++) {
            if (s[i] == '-') {
                sign = true;
                continue;
            }
            b = b*10 + (s[i] - '0');
        }
        if (sign)
            b = -b;
        return {a,b};
    }
    string complexNumberMultiply(string num1, string num2) {
        int a = 0, b = 0, c = 0, d = 0;
        pair<int, int> temp;
        temp = complexToInt(num1);
        a = temp.first;
        b = temp.second;
        temp = complexToInt(num2);
        c = temp.first;
        d = temp.second;
        int realPart = a * c - b * d;
        int imaginaryPart = a * d + b * c;
        string ans = to_string(realPart) + "+" + to_string(imaginaryPart) + "i";
        return ans;
    }
};
