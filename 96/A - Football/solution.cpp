#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    string s;
    cin >> s;
    int count0 = 0;
    int count1 = 0;
    int n = s.length();
    for(int i=0;i<n;i++) {
        if(s[i] - '0' == 0) {
            count0++;
        }
        else {
            count0 = 0;
        }
 
        if(count0 >= 7) {
            cout << "YES
";
            return;
        }
    }
 
    for(int i=0;i<n;i++) {
        if(s[i] - '0' == 1) {
            count1++;
        }
        else {
            count1 = 0;
        }
        if(count1 >= 7) {
            cout << "YES
";
            return;
        }
    }
 
    cout << "NO
";
    return;
    
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}