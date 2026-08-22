#include <bits/stdc++.h>
using namespace std;
 
 
long long isPossible(long long a, long long b, long long c) {
    if (b % 2 == c % 2)
        return 1;
    return 0;
}
 
 
void solve() {
    long long a,b,c;
    cin>>a>>b>>c;
    int ans[3] = {0,0,0};
    ans[0] = isPossible(a,b,c);
    ans[1] = isPossible(b,a,c);
    ans[2] = isPossible(c,a,b);
 
    for (auto it : ans)
        cout << it << " ";
 
    cout << '
';
 
}
 
int main() {
    int t;
    cin>>t;
    while(t--) {
        solve();
    }
    return 0;
}