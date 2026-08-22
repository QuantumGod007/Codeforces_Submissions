#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int x;
    cin>>x;
    int steps = 0;
    int rem = 0;
    rem = x;
 
 
    while(true) {
        if (rem >= 5) {
            steps = steps + (rem/5);
            rem = rem % 5;
        }
        else if (rem >= 4) {
            steps = steps + (rem/4);
            rem = rem % 4;
        }
        else if (rem >= 3) {
            steps = steps + (rem/3);
            rem = rem % 3;
        }
        else if (rem >= 2) {
            steps = steps + (rem/2);
            rem = rem % 2;
        }
        else if (rem >= 1) {
            steps = steps + (rem/1);
            rem = rem % 1;
        }
        if(rem == 0) {
            cout << steps << '
';
            break;
        }
    }
    
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}