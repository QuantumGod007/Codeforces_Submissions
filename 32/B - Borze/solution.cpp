#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    string s;
    cin >> s;
    int n = s.length();
    vector<int> v;
 
    for(int i=0;i<n;i++) {
        if(s[i] == '.') {
            v.push_back(0);
        }
        else if (s[i] == '-') {
            if(s[i+1] == '.') {
                v.push_back(1);
            }
            else if(s[i+1] == '-') {
                v.push_back(2);
            }
            i++;
        }
    
    }
    
 
    int l = v.size();
    for(int i=0;i<l;i++) {
        cout << v[i];
    }    
    cout << '
';
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   solve();
    
    return 0;
}