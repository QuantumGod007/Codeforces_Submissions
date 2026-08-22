#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    int maximum = INT_MIN;
    int sum = 0;
    int a = 0;
    int b = 0;
 
    for(int i=1;i<=n;i++) {
        cin >> a;
        cin >> b;
 
        sum -= a;
        sum += b;
        maximum = max(maximum,sum);
    }
    cout << maximum << '
';
    
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
 
    return 0;
}