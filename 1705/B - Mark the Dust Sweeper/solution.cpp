#include <bits/stdc++.h>
using namespace std;
 
void solve()  {
    int n;
    cin >> n;
    bool nonZero = false;
    int cnt = 0;
    long long sum = 0;
    long long val; 
 
    for(int i=0;i<n-1;i++) {
        cin >> val; 
        if(val > 0) {
            nonZero = true;
            sum += val;
        }
        else if (nonZero) {
            sum++;
        }
    }
    cin >> val;
    cout << sum << '
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