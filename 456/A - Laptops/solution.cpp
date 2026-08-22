#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<pair<int,int>> v(n);
 
    for(int i=0;i<n;i++) {
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(),v.end());
    for(int i=1;i<n;i++) {
        if(v[i].second < v[i-1].second) {
            cout << "Happy Alex
";
            return;
        }
    }
 
    cout << "Poor Alex
";
    
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   
    solve();
    
    return 0;
}