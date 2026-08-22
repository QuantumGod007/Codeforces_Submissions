#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
 
    vector<int> arr(n);
    
    for(int i=0;i<n;i++) {
        cin >> arr[i];
      
    }
    int maj = 0;
    if(arr[0] == arr[1]) {
            maj = arr[0];
    }
    else {
        if(arr[0] == arr[2]) {
            maj = arr[0];
        }
        else {
            maj = arr[1];
        }
    }
 
    for(int i=0;i<n;i++) {
        if(arr[i] != maj) {
            cout << i+1 << '
';
        } 
      
    }
    
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}