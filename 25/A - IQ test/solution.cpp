#include <bits/stdc++.h>
using namespace std;
 
 
void solve() {
    int n;
    cin >> n;
 
    vector<int> a(n);
    int EvenCnt = 0;
    int OddCnt = 0;
 
    for(int i=0;i<n;i++) {
        cin >> a[i];
 
        if(a[i] % 2 == 0) {
            EvenCnt++;
        }
        else {
            OddCnt++;
        }
    }
    if(EvenCnt > OddCnt) {
        for(int i=0;i<n;i++) {
            if(a[i] % 2 != 0) {
                cout << i + 1 << '
';
                break;
            }
        }
    }
    else {
        for(int i=0;i<n;i++) {
            if(a[i] % 2 == 0) {
                cout << i + 1 << '
';
                break;
            }
        }
    }
 
 
 
}
 
int main() {
 
 
    solve();
    
    return 0;
 
}