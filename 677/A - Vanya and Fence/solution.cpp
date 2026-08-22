#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int x,y;
    cin>>x>>y;
    vector<int> f(x);
    int width = 0;
    for(int i=0;i<x;i++) {
        cin>>f[i];
        if(f[i] > y) {
            width += 2;
        }
        else {
            width++;
        }
    }
    cout << width << '
';
 
 
    
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}