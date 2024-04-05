class Solution {
public:
    bool isEqual(vector<int>&count1, vector<int>&count2)
    {
        for(int i=0; i<26; i++) {
            if(count1[i] != count2[i])
                return false;
        }
        return true;
    }

    bool checkInclusion(string s1, string s2) {
        //count the character in s1
        vector<int> count1(26);
        for(int i=0; i<s1.length(); i++) {
            int index = s1[i]-'a';
            count1[index]++;
        }

        //traverse s2 string in window size of s1 length and compare
        int i=0;
        int range = s1.length();
        
        //count the characters in s2
        vector<int> count2(26);

        // first range in s2
        while(i<range && i<s2.length())
        {
            int index = s2[i]-'a';
            count2[index]++;
            i++;
        }

        if(isEqual(count1, count2))
            return true;

        
        // next other ranges
        while(i<s2.length())
        {   
            //add the new character
            char newChar = s2[i];
            int index = newChar - 'a';
            count2[index]++;

            //remove the old character
            char oldChar = s2[i-range];
            index = oldChar - 'a';
            count2[index]--;

            if(isEqual(count1, count2))
                return true;
            
            i++;
        }
        return false;
    }
};
