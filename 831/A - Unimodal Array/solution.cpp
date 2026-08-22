#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    bool cons = false;
    bool dec = false;
    bool ans = true;
    cin >> a[0];
    int prev = a[0]; 
    for(int i=1;i<n;i++) {
        cin >> a[i];
        if(a[i] > prev && !dec && !cons) {
 
        }
        else if(a[i] == prev && !dec) {
            cons = true;
        }
        else if(a[i] < prev) {
            dec = true;
        }
        else {
            ans = false;
        }
        prev = a[i];
    }
 
    if(ans) {
        cout << "YES
";
    }
    else {
        cout << "NO
";
    }
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    solve();
 
    return 0;
}