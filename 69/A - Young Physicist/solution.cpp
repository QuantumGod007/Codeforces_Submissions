#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    int sum = 0;
    int a,b,c;
    int x=0,y=0,z=0;
    for(int i=0;i<n;i++) {
        cin >> a >> b >> c;
        x += a;
        y += b;
        z += c;
    }
    if(x==0 && y==0 && z==0) {
        cout << "YES
";
    }
    else {
        cout << "NO
";
    }
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    
    solve();
    
    return 0;
}