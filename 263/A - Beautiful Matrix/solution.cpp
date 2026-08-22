#include <bits/stdc++.h>
using namespace std;
 
void solve() {
 
    int a[5][5];
    int f,s;
    
    for(int i=0;i<5;i++) {
        for(int j=0;j<5;j++) {
            cin >> a[i][j];
            if(a[i][j] == 1) {
                f=i;
                s=j;
                break;
            }
        }
    }
    int add = abs(2-f) + abs(2-s);
    cout << add << '
';
 
    
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
 
    solve();
    return 0;
}