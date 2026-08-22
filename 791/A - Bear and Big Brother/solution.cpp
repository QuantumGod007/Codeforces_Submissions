#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int a,b;
    cin>>a>>b;
    int years = 0;
 
    while(a<=b) {
        a = a*3;
        b = b*2;
        years++;
    }
    cout << years << '
';
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
 
    return 0;
}