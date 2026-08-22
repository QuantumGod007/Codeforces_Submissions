#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n,x,y,z;
    cin >> n >> x >> y >> z;
    int normal_time = 0;
    int lines_without_ai = 0;
    while(lines_without_ai < n) {
        lines_without_ai += x;
        lines_without_ai += y;
        normal_time++;
    }
    int lines_with_ai = 0;
 
    int with_ai_time = 0;
    int setup = z;
 
    while(lines_with_ai < n) {
        lines_with_ai += x;
        if(setup <= 0) {
            lines_with_ai += y * 10;
        }
        with_ai_time++;
        setup--;
 
    }
    cout << min(normal_time,with_ai_time) << "
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