class Solution {
public:
    void solve(string& digits, vector<string>& map, vector<string>& ans, string output, int index) {
        if (index >= digits.length()) {
            ans.push_back(output);
            return;
        }
        int num = digits[index] - '0';
        string value = map[num];
        for (int i = 0; i < value.length(); i++) {
            output.push_back(value[i]);
            solve(digits, map, ans, output, index+1);
            output.pop_back();
        }

    }
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if (digits.length() == 0)
            return ans;
        vector<string> map = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        string output = "";
        solve(digits,map,ans,output,0);
        return ans;
    }
};
