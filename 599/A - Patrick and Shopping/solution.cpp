#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int a,b,c;
    cin >> a >> b >> c;
    int ans1 = a+b+c;
    int ans2 = 2*(a+b);
    int ans3 = 2*(a+c);
    int ans4 = 2*(b+c);
 
    cout << min({ans1,ans2,ans3,ans4});
 
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    solve();
 
    return 0;
}