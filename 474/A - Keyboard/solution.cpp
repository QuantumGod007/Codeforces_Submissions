#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    string s = "qwertyuiopasdfghjkl;zxcvbnm,./";
    char ch;
    cin >> ch;
    string check;
    cin >> check;
    if(ch == 'R') {
        for(int i=0;i<check.length();i++) {
            for(int j=0;j<s.length();j++) {
                if(check[i] == s[j]) {
                    check[i] = s[j-1];
                    break;
                }
            }
        }
    }
    else {
        for(int i=0;i<check.length();i++) {
            for(int j=0;j<s.length();j++) {
                if(check[i] == s[j]) {
                    check[i] = s[j+1];
                    break;
                }
            }
        }  
    }
    cout << check << endl;
 
 
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    solve();
 
    return 0;
}