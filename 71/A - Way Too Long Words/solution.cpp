#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    cin >> n;
 
    while (n--) {
        string s;
        cin >> s;
 
        if (s.length() > 10) {
            cout << s.front() 
                 << (s.length() - 2) 
                 << s.back() << "
";
        } else {
            cout << s << "
";
        }
    }
    return 0;
}