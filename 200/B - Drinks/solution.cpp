#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    int sum = 0;
    for(int i=0;i<n;i++) {
        cin >> a[i];
        sum += a[i];
    }
double ans = (double)sum / n;
cout << fixed << setprecision(12) << ans << '
';
 
    
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    
    return 0;
}