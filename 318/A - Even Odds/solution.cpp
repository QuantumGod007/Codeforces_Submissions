#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    long long n, k;
    cin >> n >> k;
 
    long long index;
    long long odd = 0;
    if(n%2==0) {
        odd = n / 2;
 
    }
    else {
        odd = (n + 1) / 2;
    }
 
    if(odd >= k) {
        cout << (2 * k) - 1;
    }
    else {
        index = k - odd;
        cout << (2 * index);
 
    }
    
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    solve();
 
    return 0;
}