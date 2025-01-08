//hnmali
#include <iostream>
#include <vector>
#include <string>
// #include <map>
// #include <unordered_set>
#include <algorithm>
// #include <climits>
using namespace std;

bool compareByLength(const string& a, const string& b) {
    return a.length() < b.length();
}

void solve() {
    int n, m, ans = 0, current_length = 0;
    cin >> n >> m;
    vector<string> words(n);
    for (int i = 0; i < n; i++) 
        cin >> words[i];
    
    for (int i = 0; i < n; i++) {
        int word_length = words[i].size();
        if (current_length + word_length <= m) {
            ans++;
            current_length += word_length;
        } 
        else 
            break;
    }
    cout << ans << '\n';
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
