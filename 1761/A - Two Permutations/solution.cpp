#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int T;
    cin >> T;
    while(T--) {
        int n,a,b;
        cin >> n >> a >> b;
        if((n==a && n==b) || n-a-b >= 2) {
            cout << "Yes
";
        }
        else {
            cout << "No
";
        }
    }
}