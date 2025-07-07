class Solution {
public:
    bool isValidCode(string code) {
        if (code.empty())
            return false;
        for (char c : code) {
            if (!(isalnum(c) || c == '_'))
                return false;
        }
        return true;
    }

    vector<string> validateCoupons(vector<string>& code, vector<string>& businessLine, vector<bool>& isActive) {
        unordered_map<string, vector<string>> categorizedCoupons;
        unordered_set<string> categories = {"electronics", "grocery", "pharmacy", "restaurant"};
        for (int i = 0; i < code.size(); i++) {
            if (!isActive[i]) 
                continue;
            const string& bl = businessLine[i];
            if (categories.find(bl) == categories.end()) 
                continue;
            if (isValidCode(code[i]))
                categorizedCoupons[bl].push_back(code[i]);
        }
        vector<string> result;
        vector<string> order = {"electronics", "grocery", "pharmacy", "restaurant"};
        for (const string& cat : order) {
            vector<string>& codes = categorizedCoupons[cat];
            sort(codes.begin(), codes.end());  
            result.insert(result.end(), codes.begin(), codes.end());
        }
        return result;
    }
};
