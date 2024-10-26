class Solution {
public:
    bool isSubstringPresent(string s) {
        string t;
        for(int i = s.length()-1; i >= 0; i--) 
            t.push_back(s[i]);
        for (int i = 0; i < s.length() - 1; i++) {
            string s1 = "";
            s1 += s[i];
            s1 += s[i + 1];
            for (int j = 0; j < t.length() - 1; j++) {
                string t1 = "";
                t1 += t[j];
                t1 += t[j + 1];

                if (t1 == s1)
                    return true;
            }
        }
        return false;
    }
};
