#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    long long n,a,b;
    cin>>n>>a>>b;
    long long first = n * a;
    long long second = ((n+2)/3) * b;
    long long thirdA = (n/3) * b;
    long long thirdB = (n%3)*a;
    long long third = thirdA + thirdB;
    cout << min({first,second,third}) << '
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