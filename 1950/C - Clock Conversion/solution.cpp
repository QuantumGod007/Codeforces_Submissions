#include <iostream>
using namespace std;
 
void solve() {
    string s;
    cin >> s;
 
    int hour = (s[0] - '0') * 10 + (s[1] - '0');
 
    // AM or PM is decided using the original hour
    if (hour < 12) {
        // AM
        if (hour == 0)
            cout << "12" << s.substr(2) << " AM
";
        else
            cout << s << " AM
";
    }
    else {
        // PM
        if (hour > 12)
            hour -= 12;
 
        if (hour < 10)
            cout << "0";
 
        cout << hour << s.substr(2) << " PM
";
    }
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        solve();
    }
 
    return 0;
}