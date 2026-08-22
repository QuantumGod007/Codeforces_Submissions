#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int x,y;
    cin >> x >> y;
    int maxi = max(x,y);
    int fav = 6 - maxi + 1;
 
    if(fav == 6) {
        cout << "1/1";
    }
    else if (fav == 5) {
        cout << "5/6";
    }
    else if (fav == 4) {
        cout << "2/3";
    }
    else if (fav == 3) {
        cout << "1/2";
    }
    else if (fav == 2) {
        cout << "1/3";
    }
    else {
        cout << "1/6";
    }
 
    cout << '
';
 
    
    
    
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  
    solve();
 
    return 0;
}