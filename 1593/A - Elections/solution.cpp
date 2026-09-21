#include <iostream>
#include <cmath>
using namespace std;
#define ll long long
 
 
void solve() {
    long long a, b, c;
    cin >> a >> b >> c;
 
    if (a > max(b, c)) cout << 0 << " ";
    else cout << max(b, c) - a + 1 << " ";
 
    if (b > max(a, c)) cout << 0 << " ";
    else cout << max(a, c) - b + 1 << " ";
 
    if (c > max(a, b)) cout << 0 << " ";
    else cout << max(a, b) - c + 1 << " ";
 
    cout << endl;
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