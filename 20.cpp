class Solution {
public:
    bool isValid(string s) {
        stack<char> brackets;
        if (s[0] == '}' or s[0] == ']' or s[0] == ')')
            return false;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '{' or s[i] == '[' or s[i] == '(')
                brackets.push(s[i]);
            else if (s[i] == '}' or s[i] == ']' or s[i] == ')') {
                if (brackets.empty())
                    return false;
                else if (s[i] == '}' and brackets.top() == '{')
                    brackets.pop();
                else if (s[i] == ']' and brackets.top() == '[')
                    brackets.pop();
                else if (s[i] == ')' and brackets.top() == '(')
                    brackets.pop();
                else
                return false;
            }
        }
        return brackets.empty();
    }
};
