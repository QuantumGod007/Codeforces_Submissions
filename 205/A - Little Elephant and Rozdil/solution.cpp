#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    long long n;
    cin >> n;
    vector<long long> a(n);
 
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }
    bool ans = true;
    long long mini = a[0];
    long long miniIndex = 0;
    for(int i=0;i<n;i++) {
        if(a[i] < mini) {
            mini = a[i];
            miniIndex = i;
        }       
    }
    for(int i=0;i<n;i++) {
        if(mini == a[i] && i != miniIndex) {
            ans = false;
            break;
        }
    }
    if(ans) {
        cout << miniIndex+1 << '
';
    }
    else {
        cout << "Still Rozdil
";
    }
 
 
 
 
 
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    solve();
 
    return 0;
}