#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n,k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<int> freq(26);
    int oddCnt = 0;
    // 'a' is 97 'a' = 0 b - 'a' = 98 - 97
    
    for(int i=0;i<n;i++) {
        freq[s[i] - 'a']++;
    }
    for(int i=0;i<26;i++) {
        if(freq[i] % 2 != 0) {
            oddCnt++;
        }
    }
    if(oddCnt - 1 <= k) {
        cout << "YES
";
    }
    else {
        cout << "NO
";
    }
 
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}