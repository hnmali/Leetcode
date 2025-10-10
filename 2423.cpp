class Solution {
public:
    bool equalFrequency(string word) {
        vector<int> freq(26);
        for(int i = 0; i < word.size(); i++) 
            freq[word[i]-'a']++;
        for(int i = 0; i < 26; i++) {
            if(!freq[i])
                continue;
            freq[i]--;
            unordered_set<int> st;
            for(int j = 0; j < 26; j++)
                if(freq[j])
                    st.insert(freq[j]);
            if(st.size() == 1)
                return true; 
            freq[i]++;
        }
        return false;
    }
};
