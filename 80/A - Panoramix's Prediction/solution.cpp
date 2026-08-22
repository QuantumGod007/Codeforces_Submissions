#include <bits/stdc++.h>
using namespace std;
 
bool isPrime(int num) {
    for(int i=2;i*i<=num;i++) {
        if(num % i == 0) {
            return false;
        }
    }
    return true;
}
 
void solve() {
    int n,m;
    cin >> n >> m;
    for(int i=n+1;;i++) {
        if(isPrime(i)) {
            if(i == m)
                cout << "YES
";
            else 
                cout << "NO
";
            return;
        }
    }
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    solve();
 
    return 0;
}