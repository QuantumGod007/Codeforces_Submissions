#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int a,b,c,d;
    cin>>a>>b>>c>>d;
 
    string s;
    cin >> s;
    int n = s.length();
    int sumOfCal = 0;
 
    for (int i=0;i<n;i++) {
        if(s[i] - '0'== 1) {
            sumOfCal += a;
        }
        else if (s[i]  - '0'== 2) {
            sumOfCal += b;
        }
        else if (s[i] - '0' == 3) {
            sumOfCal += c;
        }
        else {
            sumOfCal += d;
        }
    }
    
    cout << sumOfCal << '
';
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
 
    return 0;
}