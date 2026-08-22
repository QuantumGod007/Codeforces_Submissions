#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n,k;
    cin>>n>>k;
    vector<int> v1(n);
    
    for(int i=0;i<n;i++){
        cin>>v1[i];
    }
    int count = 0;
    for(int i=0;i<n;i++){
        if((v1[i] >= v1[k-1]) && v1[i] > 0)
            count++;
    }
    cout << count << '
';
    
    
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}