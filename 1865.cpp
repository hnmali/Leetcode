class FindSumPairs {
public:
    vector<int> nums1, nums2;
    unordered_map<int, int> cnt;
    FindSumPairs(vector<int>& nums1, vector<int>& nums2) {
        this->nums1 = nums1;
        this->nums2 = nums2;
        for(int num : nums2)
            cnt[num]++; 
    }
    
    void add(int i, int val) {
        cnt[nums2[i]]--;
        nums2[i] += val;
        cnt[nums2[i]]++;
    }
    
    int count(int tot) {
        int ans = 0;
        for(int num : nums1) {
            int ele = tot - num;
            if(cnt.find(ele) != cnt.end())
                ans += cnt[ele];
        }
        return ans;
    }
};

/**
 * Your FindSumPairs object will be instantiated and called as such:
 * FindSumPairs* obj = new FindSumPairs(nums1, nums2);
 * obj->add(index,val);
 * int param_2 = obj->count(tot);
 */
