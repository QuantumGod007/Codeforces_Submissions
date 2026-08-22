#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    sort(arr.begin(),arr.end());
    if(n==1) {
        if(arr[0] == 1) {
            cout << "YES
";
        }
        else {
            cout << "NO
";
        }
        return;
    }
 
   
    if((arr[n-1] - arr[n-2]) > 1) {
        cout << "NO
";
    }
    else
        cout << "YES
";
    
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