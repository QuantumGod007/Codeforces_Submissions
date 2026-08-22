#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    string s;
    cin >> s;
    int cntA = 0, cntB = 0;
    for(int i=0;i<5;i++) {
        if(s[i] == 'A') {
            cntA++;
        }
        else {
            cntB++;
        }
 
    }
    if(cntA > cntB)
        cout << "A
";
    else
        cout << "B
";
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