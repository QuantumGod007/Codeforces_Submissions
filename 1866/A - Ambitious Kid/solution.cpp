#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    int mini = INT_MAX;
    for(int i=0;i<n;i++) {
        int val;
        cin >> val;
        mini = min(mini,abs(val));
 
    }
    cout << mini << '
';
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    solve();
 
    return 0;
}