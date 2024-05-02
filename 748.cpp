class Solution {
public:
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
        priority_queue<char, vector<char>, greater<char>> minHeap;
        for (int k = 0; k < licensePlate.length(); k++) {
            char temp = tolower(licensePlate[k]);
            if (temp >= 'a' && temp <= 'z')
                minHeap.push(temp);
        }
        string ans = "11111111111111111111";
        for (int i = 0; i < words.size(); i++) {
            priority_queue<char, vector<char>, greater<char>> tempHeap = minHeap;
            string temp = words[i];
            sort(temp.begin(),temp.end());
            for (int j = 0; j < temp.length(); j++) {
                if (temp[j] == tempHeap.top()) 
                    tempHeap.pop();
                if (tempHeap.empty() && ans.length() > words[i].length())
                    ans = words[i];
            }
            if (tempHeap.empty() && ans.length() > words[i].length())
                ans = words[i];
        }
        return ans;
    }
};
