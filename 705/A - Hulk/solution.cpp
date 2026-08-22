#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    for(int i=1;i<=n-1;i++) {
        if(i%2!=0) {
            cout << "I hate that" << " ";
        }
        else {
            cout << "I love that" << " ";
        }
    }
    if(n%2==0) {
        cout << "I love it";
    }
    else {
        cout << "I hate it";
    }
    
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}