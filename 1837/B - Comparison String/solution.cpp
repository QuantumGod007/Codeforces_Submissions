#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    long long n;
    cin >> n;
    string s;
    cin >> s;
    int longest_g = INT_MIN;
    int longest_l = INT_MIN;
    int cnt_g = 0, cnt_l = 0;
    for(int i=0;i<n;i++) {
        if(s[i] == '<') {
            cnt_l = 0;
            cnt_g++;
            longest_g = max(longest_g, cnt_g);
        }
        if(s[i] == '>') {
            cnt_l++;
            cnt_g = 0;
            longest_l = max(longest_l, cnt_l);
        }
    }
    cout << max(longest_g, longest_l) + 1 << "
";
 
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while(t--) {
        solve();
    }
 
    return 0;
}