class Solution {
public:
    string largestGoodInteger(string num) {
        string s = "";
        for(int i = 0; i < num.size()-2; i++)
            if((num[i] == num[i+1] && num[i] == num[i+2]))
                if(!s.length() || s[0] < num[i])
                    s = string(3, num[i]);
        return s;
    }
};
