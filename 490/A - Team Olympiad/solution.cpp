#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    int total = 0;
    vector<int> arr(n);
    vector<int> one;
    vector<int> two;
    vector<int> three;
 
 
    for(int i=0;i<n;i++) {
        cin >> arr[i];
        if(arr[i] == 1) {
            one.push_back(i);
        }
        else if(arr[i] == 2) {
            two.push_back(i);
 
        }
        else {
            three.push_back(i);
        }
    }
    total =  min({one.size(),two.size(),three.size()});
    cout << total << '
';
    int i = 0;
    while(i < total) {
        cout << one[i] + 1 << " " << two[i] + 1 <<  " " << three[i] + 1 << '
';
        i++;
    }
 
 
 
 
 
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    solve();
 
    return 0;
}