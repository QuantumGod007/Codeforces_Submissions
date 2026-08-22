#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    int val = 0;
 
    while(n--) {
        string x;
        cin >> x;
        
        if(x == "++X" || x == "X++") {
            val++;
        }
        if(x == "--X" || x == "X--") {
            val--;
        }
    }
    cout << val << '
';
}