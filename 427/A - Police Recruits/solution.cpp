#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    int cnt = 0;
    int uns = 0;
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        if(v[i] > 0) {
            cnt += v[i];
        }
        else if (v[i] < 0) {
            if(cnt > 0) {
                cnt--;
            }
            else {
                uns++;
            }
 
        }
    }
    cout << uns << "
";
    
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}