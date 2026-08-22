#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    string table;
    cin >> table;
    int cnt = 0;
    if(n == 1) {
        cout << 0 << '
';
        return;
    }
 
    for(int i=0;i<n-1;i++) {
        if(table[i] == table[i+1])
            cnt++;
       
 
    }
    cout << cnt << '
';
    
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}