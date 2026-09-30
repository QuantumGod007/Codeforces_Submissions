#include <bits/stdc++.h>
using namespace std;
 
 
void solve() {
    int n;
    cin >> n;
    vector<int> a(3);
    int mini = INT_MAX;
 
    for(int i=0;i<3;i++)
    {
        cin >> a[i];
        mini = min(mini,a[i]);
    }
    cout << n - mini << '
';
 
}
 
int main() {
    int tt;
    cin >> tt;
    while(tt--) {
        solve();
    }
}