#include <bits/stdc++.h>
using namespace std;
 
 
void solve() {
    int n;
    cin >> n;
    char c;
    cin >> c;
 
    int coin_cnt = 0;
 
    string s;
    cin >> s;
 
    int i = 0;
    int j = n - 1;
 
    while(i < j) {
        if(s[i]!=s[j]) {
            if(s[i] != c) 
                coin_cnt++;
            if(s[j] != c) 
                coin_cnt++;
        }
        i++;
        j--;
    }
    cout << coin_cnt << endl;
    
}
 
int main() {
    int tt;
    cin >> tt;
    while(tt--)
    solve();
 }