#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    long long n;
    cin >> n;
    int cnt = 0;
 
    while(n > 0) {
        if(n % 10 == 4 || n % 10 == 7) {
            cnt++;
        }
        n /= 10;
    }
    if(cnt == 4 || cnt == 7) {
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