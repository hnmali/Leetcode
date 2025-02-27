class Solution {
public:
    int dayOfYear(string date) {
        int year = (date[0]-'0')*1000 + (date[1]-'0')*100 + 
                    (date[2]-'0')*10 + date[3]-'0';
        vector<int> months(12);
        months[0] = months[2] = months[4] = months[6] = 31;
        months[7] = months[9] = months[11] = 31;
        months[3] = months[5] = months[8] = months[10] = 30;
        if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) 
            months[1] = 29;
        else 
            months[1] = 28;
        int ans = (date[8]-'0')*10 + (date[9]-'0');
        int month = (date[5]-'0')*10 + (date[6]-'0');
        for(int i = 0; i < month-1; i++)
            ans += months[i];
        return ans;        
    }
};
