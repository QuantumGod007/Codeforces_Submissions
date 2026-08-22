#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    string s;
    cin >> s;
    int mul = 0;
    int uni = 0;
    vector<int> v(26, 0);
    for(int i=0;i<s.length();i++) 
        v[s[i] - 'a']++;
 
    for(int i=0;i<v.size();i++) {
        if(v[i] > 1) {
            mul++;
        }
        else if (v[i] == 1) {
            uni++;
        }       
    }
    int total = mul + (uni/2);
    cout << total << "
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