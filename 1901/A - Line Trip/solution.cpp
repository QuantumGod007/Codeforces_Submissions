#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n,x;
    cin >> n >> x;
    vector<int> refuelPoints(n);
    for (int i = 0; i < n; i++) {
        cin >> refuelPoints[i];
    }
 
    int maxDifference = refuelPoints[0];
    for(int i = 0; i < n - 1; i++)
    {   
        maxDifference = max(maxDifference, abs(refuelPoints[i+1] - refuelPoints[i]));
    }
 
    maxDifference = max(maxDifference,2*(x-refuelPoints[n-1]));
    cout << maxDifference << endl;
 
}
 
int main() {
    int T;
    cin >> T;
    while(T--) {
        solve();
    }
    return 0;
}