#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    int temp = n;
    int k = 0;
    while(temp > 0) {
        int digit = temp % 10;
        if(digit != 0) {
            k++;
        }
        temp /= 10;
 
    }
    cout << k << '
';
    temp = n;
    int cnt = 0;
    while(temp > 0) {
        int digit = temp % 10;
        if(digit != 0) {
            for(int i=0;i<cnt;i++) {
                digit *= 10;
            }
            cout << digit << " ";
 
        }
        
        
        cnt++;
        temp /= 10;
 
 
    }
    cout << '
';
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