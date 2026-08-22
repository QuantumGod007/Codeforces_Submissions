#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    long long n,k,x;
    cin >> n >> k >> x;
    long long minimum_sum = k *(k+1)/2;
    long long maximum_sum = (n*(n+1)/2) - ((n-k)*(n-k+1)/2);
    if(x >= minimum_sum && x <= maximum_sum) {
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
 
    int t;
    cin >> t;
 
    while(t--) {
        solve();
    }
 
    return 0;
}