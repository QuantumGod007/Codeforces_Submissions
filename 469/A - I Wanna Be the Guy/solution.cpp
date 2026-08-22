#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<int> freq(n+1);
  
    int p;
    cin >> p;
    int val;
    for(int i=1;i<=p;i++) {
        cin >> val;
        freq[val]++;
    }
    int q;
    cin >> q;
    for(int i=1;i<=q;i++) {
        cin >> val;
        freq[val]++;
    }
 
    for(int i=1;i<=n;i++) {
        if(freq[i] == 0) {
            cout << "Oh, my keyboard!
";
            return;
        }
 
    }
    cout << "I become the guy.
";
 
    
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   
    solve();
    
    return 0;
}