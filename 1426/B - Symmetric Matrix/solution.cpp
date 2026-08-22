#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    int a,b,c,d;
    cin >> n;
    int k;
    cin >> k;
    bool yes = false;
   
    for(int i=0;i<n;i++) {
        cin >> a;
        cin >> b;
        cin >> c;
        cin >> d;
        if(b == c)
            yes = true;
 
    }
        
    
    if(yes && k%2==0) {
        cout << "YES
";
    }
    else {
        cout << "NO
";    
    }
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while(t--) {
        solve();
    }
 
    return 0;
}