#include <iostream>
using namespace std;
 
void solve() {
    int cnt = 0;
    int n,m;
    cin >> n >> m;
   
    for(int a=0;a<=1000;a++) {
        for(int b=0;b<=100;b++) {
            if(((a*a)+b)==n && (a+(b*b)) == m) {
                cnt++;
            }
        }
    }
    cout << cnt << '
';
    
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    solve();
 
    return 0;
}