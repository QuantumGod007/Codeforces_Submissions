#include <iostream>
#include <algorithm>
using namespace std;
 
void solve() {
    int final = 1440;
    int a,b;
    cin>>a>>b;
    int current = a*60 + b;
    cout << final - current << '
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