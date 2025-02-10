class Solution {
public:
    string clearDigits(string s) {
        stack<char> st;
        for(int i = 0; i < s.size(); i++)
            if(s[i] >= '0' && s[i] <= '9')
                st.pop();
            else
                st.push(s[i]);
        s = "";
        while(!st.empty()) { 
            s += st.top();
            st.pop();
        }
        for(int i = 0, j = s.size()-1; i < j; i++,j--)
            swap(s[i],s[j]);
        return s;
    }
};
