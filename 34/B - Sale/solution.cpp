#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int m,n;
    cin >> n >> m;
 
    vector<int> arr(n);
 
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
 
    sort(arr.begin(),arr.end());
 
    int cnt = 0;
    int Easymoney = 0;
 
    for(int i=0;i<n;i++) {
        if(cnt < m && arr[i] < 0) {
            Easymoney += -arr[i];
            cnt++;
        }
        else if(arr[i] >= 0) {
            break;
        }
        
    }
 
    cout << Easymoney << '
';
 
 
    
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}