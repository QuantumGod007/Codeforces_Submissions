#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n,h,m;
    cin >> n >> h >> m;
    int sleepTime = INT_MAX;
    int curr = h * 60 + m;
    int ans;
 
    while(n--) {
        int ha,ma;
        cin >> ha >> ma;
        int alarm = ha*60+ma;
        if(alarm >= curr) {
            ans = alarm - curr;
            sleepTime = min(sleepTime,ans);
 
        }
        else {
            ans = 1440 - curr + alarm;
            sleepTime = min(sleepTime,ans);
        }
    }
    cout << sleepTime/60 << " " << sleepTime % 60 <<  '
';
 
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