#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    vector<int> pos(n+1);
    for(int i=0;i<n;i++) {
        cin >> arr[i];
        pos[arr[i]] = i + 1;
    }
    int k;
    cin >> k;
 
    long long sumRight = 0;
    long long sumLeft = 0;
 
    for(int i=0;i<k;i++) {
        int val;
        cin >> val;
        sumLeft += pos[val];
        sumRight += n - pos[val] + 1;
    }
    cout << sumLeft << " " << sumRight << '
';
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    solve();
 
    return 0;
}