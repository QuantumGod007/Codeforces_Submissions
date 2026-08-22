#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int t_cnt=0,m_cnt=0;
    for(int i=0;i<n;i++) {
        if(s[i] == 'T') {
            t_cnt++;
        }
        else {
            m_cnt++;
        }
    }
    int twice = m_cnt * 2;
    if(t_cnt != twice) {
        cout << "NO
";
        return;
    }
    int t = 0;
 
    for(int i=0;i<n;i++) {
        if(s[i] == 'T') 
            t++;
            
        else if(s[i] == 'M') {
            if(t == 0) {
                cout << "NO
";  
                return; 
            }   
            else 
                t--;         
        }
    }
    t = 0;
    for(int i=n-1;i>=0;i--) {
        if(s[i] == 'T') 
            t++;
            
        else if(s[i] == 'M') {
            if(t == 0) {
                cout << "NO
";  
                return; 
            }   
            else 
                t--;         
        }
    }
 
    cout << "YES
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