#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    int suma = 0;
    int sumb = 0;
    for (int i=0; i<n; i++) {
        int m,c;
        cin >> m >> c;
        if(m > c) {
            suma++;
        }
        else if(m < c) {
            sumb++;
        }
        
        
    }
 
    if(suma > sumb) {
        cout << "Mishka
";
    }
    else if (suma < sumb) {
        cout << "Chris
";
    }
    else {
        cout << "Friendship is magic!^^
";
    }
    
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}