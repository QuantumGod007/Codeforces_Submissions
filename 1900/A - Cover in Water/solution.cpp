#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int count_of_empty = 0;
    int current_count_of_empty = 0;
    int flag = 0;
 
    // or here u can use 0 to 2 methods or let's say imfinite methods to solve problem;
    for(auto ch : s) {
        if (ch == '.') {
            current_count_of_empty++;
        }
        else {
            count_of_empty += current_count_of_empty;
            if(current_count_of_empty >= 3) {
                flag = 1;
            }
            current_count_of_empty = 0;
        }
    }
    count_of_empty += current_count_of_empty;
    if(current_count_of_empty >= 3) {
        flag = 1;
    }
    if(flag) {
        cout << 2 << "
";
    }
    else {
        cout << count_of_empty << "
";
    }
    
}
 
int main() {
    int T;
    cin >> T;
    while(T--) {
        solve();
    }
    return 0;
}