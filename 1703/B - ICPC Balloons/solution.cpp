#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    string s;
    int n;
    cin >> n;
    cin >> s;
 
    bool arr[26] = {false};
    int sum = 0;
 
    for (int i=0; i < n; i++) {
        int index = s[i] - 'A';
        if(arr[index] == false) {
            sum += 2;
            arr[index] = true;
        }
        else {
            sum += 1;
        } 
    }
 
    cout << sum << '
';
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}