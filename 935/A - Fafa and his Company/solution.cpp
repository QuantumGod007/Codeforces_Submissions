#include <iostream>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    int possibility_cnt = 0;
    for(int i=1;i<n;i++) {
        if(n%i==0)
            possibility_cnt++;
    }
 
    cout << possibility_cnt << '
';
    
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    solve();
 
    return 0;
}