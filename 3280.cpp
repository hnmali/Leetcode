class Solution {
public:
    string intToBinary(int n) {
        string binary = "";
        if (n == 0) 
            return "0";
        while (n > 0) {
            binary = (n % 2 == 0 ? "0" : "1") + binary;
            n /= 2;
        }
        return binary;
    }
    string convertDateToBinary(string date) {
        string ans;
        int year = (date[0] - '0') * 1000 + (date[1] - '0') * 100 + (date[2] - '0') * 10 + (date[3] - '0');
        int month = (date[5] - '0') * 10 + (date[6] - '0');
        int day = (date[8] - '0') * 10 + (date[9] - '0');
        ans = intToBinary(year);
        ans += '-';
        ans += intToBinary(month); 
        ans += '-';
        ans += intToBinary(day);
        return ans;
    }
};
