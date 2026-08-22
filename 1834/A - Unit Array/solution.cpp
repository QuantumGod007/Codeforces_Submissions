#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    long long n;
    cin >> n;
    vector<long long> a(n);
    long long cnt_neg_1 = 0;
    long long cnt_pos_1 = 0;
    long long ops = 0;
 
    for(int i=0;i<n;i++){
        cin >> a[i];
        if(a[i] == -1) cnt_neg_1++;
        else cnt_pos_1++;
    }
    while(cnt_neg_1 > cnt_pos_1 || cnt_neg_1 % 2 != 0) {
        cnt_neg_1--;
        cnt_pos_1++;
        ops++;
    }
 
    cout << ops << '
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