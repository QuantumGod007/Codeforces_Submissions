#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    int maxi = INT_MIN;
    int mini = INT_MAX;
    int maxIdx;
    int minIdx;
    for(int i=0;i<n;i++) {
        cin >> a[i];
        if(a[i] > maxi) {
            maxi = a[i];
            maxIdx = i;
        }
        if(a[i] <= mini) {
            mini = a[i];
            minIdx = i;
        }
    }
   
    int timeForArr = maxIdx + (n-1-minIdx);
 
    if(maxIdx > minIdx)
        cout << timeForArr - 1 << '
';
 
    else 
        cout << timeForArr << '
';
    
    // cout << maxIdx << " " <<  minIdx << '
';
 
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    solve();
 
    return 0;
}