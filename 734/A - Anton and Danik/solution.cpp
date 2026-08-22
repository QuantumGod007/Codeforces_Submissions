#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cntA = 0, cntD = 0;
    for (int i=0;i<n;i++) {
        if(s[i] == 'A')
            cntA++;
        else
            cntD++;
    }
    if(cntA > cntD) {
        cout << "Anton
";
    }
    else if (cntA < cntD) {
        cout << "Danik
";
    }
    else {
        cout << "Friendship
";
    }
    
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}