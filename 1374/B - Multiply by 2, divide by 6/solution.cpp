#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int ops = 0;
 
        while(true) {
            if (n==1) {
                cout << ops << '
';
                break;
            }
 
            if(n%6==0) {
                n/= 6;
                ops++;
            }
            else if(n%3==0) {
                n *= 2;
                n /= 6;
                ops += 2;
            }
            else {
                cout << "-1
";
                break;
            }
        }
    }
}