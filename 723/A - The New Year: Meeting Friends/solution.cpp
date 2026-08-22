#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    vector<int> v(3);
    for(int i=0;i<3;i++) {
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    int med = v[1];
    int MinDis = abs(v[0]-med) + abs(v[1]-med) + abs(v[2]-med);
    cout << MinDis << '
';
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    solve();
 
    return 0;
}