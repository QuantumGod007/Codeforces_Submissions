#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    string a,b,s;
    int cnt1 = 0, cnt2 = 0;
    cin >> a;
    cnt1++;
 
    for(int i=1; i<n; i++) {
        cin >> s;
        if(s==a) {
            cnt1++;
        }
        else {
            b=s;
            cnt2++;
        }
    }
    if(cnt1 > cnt2) {
        cout << a;
    }
    else {
        cout << b;
    }
 
 
 
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}