#include <bits/stdc++.h>
using namespace std;
 
 
void solve() {
 
    int arr[7];
    int maxi = INT_MIN;
 
    for(int i = 0; i < 7; i++) {
        cin >> arr[i];
        maxi = max(maxi, arr[i]);
    }
 
    int sum = 0;
    for (int i=0;i<7;i++) {
        sum -= arr[i];
    }
    cout << sum + maxi + maxi << endl;
 
   
}
 
int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}