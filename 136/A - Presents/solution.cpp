#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<int> arr(n+1);
    for(int i=1;i<=n;i++) {
        int x;
        cin >> x;
 
        arr[x] = i;
 
    }
    for(int i=1;i<=n;i++) {
        cout << arr[i] << " ";
    }
    cout << '
';
 
 
 
    
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  
    solve();
    
    return 0;
}