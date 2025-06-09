class Solution {
public:
    string reverseWords(string s) {
        string ans = "";
        int n = s.size();
        for(int i = 0 ; i < n; i++){
            string temp;
            while(s[i]==' ' && i < n)
                i++;
            while(s[i] != ' ' && i < n)
                temp += s[i++];
            if(temp.size()){
                if(!ans.size()) 
                    ans = temp;
                else 
                    ans = temp + " " + ans;
            }
        }
        return ans;    
    }
};
