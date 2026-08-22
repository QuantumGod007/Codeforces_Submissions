#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    vector<string> target(10);
    long long total_points = 0;
    for(int i = 0; i < 10; i++) {
        cin >> target[i];
    }
    int n = 10;
 
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(target[i][j] == 'X') {
                if(i==0||i==n-1||j==0||j==n-1) {
                    total_points += 1;
                }
                else if (i==1||i==n-2||j==1||j==n-2) {
                    total_points += 2;
                }
                else if (i==2||i==n-3||j==2||j==n-3) {
                    total_points += 3;
                }
                else if (i==3||i==n-4||j==3||j==n-4) {
                    total_points += 4;
                }
                else {
                    total_points += 5;
                }
            
        }
    } 
}
    cout << total_points << "
";
 
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