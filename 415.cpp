class Solution {
public:
    string addStrings(string a, string b) {
        string ans;
        char carry = '0';
        int i = a.size() - 1, j = b.size()-1;
        while (i >= 0 && j >= 0) {
            if (carry == '1') {
                if (a[i] == '9') {
                    a[i] = '0';
                    carry = '1';
                } else {
                    a[i]++;
                    carry = '0';
                }
            }
            int t1 = a[i] - '0', t2 = b[j] - '0';
            if ((t1 + t2) > 9)
                carry = '1';
            char ch = ((t1 + t2) % 10) + '0';
            string temp;
            temp.push_back(ch);
            ans = temp + ans;
            i--;
            j--;
        }
        while (i >= 0) {
            if (carry == '1') {
                if (a[i] == '9') {
                    a[i] = '0';
                    carry = '1';
                } else {
                    a[i]++;
                    carry = '0';
                }
            }
            string temp;
            temp.push_back(a[i]);
            ans = temp + ans;
            i--;
        }
        while (j >= 0) {
            if (carry == '1') {
                if (b[j] == '9') {
                    b[j] = '0';
                    carry = '1';
                } else {
                    b[j]++;
                    carry = '0';
                }
            }
            string temp;
            temp.push_back(b[j]);
            ans = temp + ans;
            j--;
        }
        if (carry == '1')
            ans = "1" + ans;
        return ans;
    }
};
