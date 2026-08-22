#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    long long n;
    cin >> n;
    vector<long long> a(n);
    long long cnt_of_odd = 0;
    for(int i=0;i<n;i++) {
        cin >> a[i];
        if(a[i] % 2 != 0) {
            cnt_of_odd++;
        }
    }
    if(cnt_of_odd % 2 == 0) 
        cout << "YES
";
    else 
        cout << "NO
";
   
 
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