//hnmali
#include <iostream>
#include <vector>
// #include <string>
// #include <map>
// #include <unordered_set>
// #include<stack>
// #include <algorithm>
// #include <climits>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++)
        cin >> nums[i];
    int parityEven = nums[0]&1;
    int parityOdd = nums[1]&1;
    for(int i = 2; i < n; i += 2)
        if((nums[i]&1) != parityEven) {
            cout << "NO\n";
            return;
        }
    for(int i = 3; i < n; i += 2)
        if((nums[i]&1) != parityOdd) {
            cout << "NO\n";
            return;
        }
    cout << "YES\n";
    return;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    // t = 1;
    while (t--) {
        solve();
    }
    return 0;
}
