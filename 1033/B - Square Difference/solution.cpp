#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    long long a,b;
    cin >> a >> b;
    long long diff = (a-b);
    long long sum = a+b;
    bool ans = true;
    for(long long i=2;i*i<=sum;i++) {
        if(sum % i == 0) {
            ans = false;
            break;
        }
    }
    if(ans && diff == 1) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
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