class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int cnt = 0;
        for(int i = 0; i <= blocks.size() - k; i++) {
            int currCnt = 0;
            for(int j = i; j < i+ k; j++)
                if(blocks[j] == 'B')
                    currCnt++;
            if(currCnt == k)
                return 0;
            cnt = max(currCnt,cnt);
        }
        cout << cnt;
        return k - cnt;
    }
};
