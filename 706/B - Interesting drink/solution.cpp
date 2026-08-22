#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    sort(arr.begin(),arr.end());
    int k;
    cin >> k;
    for(int it=0;it<k;it++) {
        int val;
        cin >> val;
        int low = 0;
        int high = n-1;
        int idx = -1;
        while(low <= high) {
            int mid = low + (high - low )/ 2;
            if(arr[mid] > val) {
                high = mid - 1;     
            }
            else {
                low = mid + 1;
                idx = mid;
            }
        }
        cout << idx+1 << '
';
 
    }
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    solve();
 
    return 0;
}