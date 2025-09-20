class Solution {
public:
    int smallestAbsent(vector<int>& nums) {
        double avg = 0;
        unordered_set<int> st;
        for(int i = 0; i < nums.size(); i++) {
            avg += nums[i];
            st.insert(nums[i]);
        }
        avg /= nums.size();
        cout << avg;
        if(avg < 0)
            avg = 0;
        avg++;
        while(st.find(avg) != st.end())
            avg++;
        return avg;
    }
};
