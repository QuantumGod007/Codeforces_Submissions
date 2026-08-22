#include <bits/stdc++.h>
using namespace std;
 
bool isLucky(int num) {
    while(num > 0) {
        int digit = num % 10;
        if(digit != 4 && digit != 7) {
            return false;
        }
        num /= 10;
    }
    return true;
}
 
void solve() {
    int n;
    cin >> n;
    if(isLucky(n)) {
        cout << "YES
";
    }
    else {
        for(int i=1;i<n;i++) {
            if(n % i == 0 && isLucky(i)) {
                cout << "YES
";
                return;
            }
        }
        cout << "NO
";
    }
    
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    solve();
 
    return 0;
}