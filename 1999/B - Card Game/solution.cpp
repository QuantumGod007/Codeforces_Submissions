#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int a1,a2,b1,b2;
    cin>>a1>>a2>>b1>>b2;
 
    int sum = 0;
    int suneet = 0;
    int slavic = 0;
 
    if(a1 > b1) {
        suneet++;
    }
    else if(b1 > a1) {
        slavic++;
    }
    if(a2 > b2) {
        suneet++;
    }
    else if(b2>a2){
        slavic++;
    }
    if(suneet > slavic) {
        sum += 2;
    }
 
    suneet = 0, slavic = 0;
 
    if(a1 > b2) {
        suneet++;
    }
    else if(b2 > a1) {
        slavic++;
    }
    if(a2 > b1) {
        suneet++;
    }
    else if(b1>a2){
        slavic++;
    }
    if(suneet > slavic) {
        sum += 2;
    }
 
 
    cout << sum << '
';
 
 
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while(t--) {
        solve();
    }
 
    return 0;
}