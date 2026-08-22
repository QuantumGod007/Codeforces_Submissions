#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    string s;
    cin >> s;
    int n = s.length();
    string news;
    for(int i=0;i<n;i++) {
        s[i] = tolower(s[i]);
 
    }
    for(int i=0;i<n;i++) {
        if(s[i] != 'a' &&s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'y' && s[i] != 'u') {
            news.push_back('.');
            news.push_back(s[i]);
        }
 
    }
    cout << news << '
';
    
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    
    return 0;
}