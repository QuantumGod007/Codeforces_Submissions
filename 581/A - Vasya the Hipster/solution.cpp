// #include <bits/stdc++.h>
// using namespace std;
 
 
// void solve() {
//     int a,b;
//     cin>>a>>b;
//     int cntDiffPairs = 0;
//     while(a != 0 && b != 0) {
//         a--;
//         b--;
//         cntDiffPairs++;
//     }
//    if(a > 1) {
//     cout << cntDiffPairs << " " << a/2 << '
'; 
//    }
 
//    else if(b > 1) {
//     cout << cntDiffPairs << " " << b/2 << '
'; 
//    }
 
//    else {
//     cout << cntDiffPairs << " " << 0 << '
';
//    }
   
 
// }
 
// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
 
//     solve();
 
// }
 
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int a, b;
    cin >> a >> b;
 
    int diff = min(a, b);
    int same = (max(a, b) - diff) / 2;
 
    cout << diff << " " << same << '
';
}