#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
 
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
 
    int cnt = 1;
    for(int i=1;i<n;i++) {
        if(arr[i] != arr[i-1]) {
            cnt++;
        }
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