 #include <bits/stdc++.h>
 using namespace std;
 
 void solve() {
    string s;
    cin >> s;
    vector<int> a;
    int len = s.length();
    for(int i=0;i<len;i++) {
        if(s[i] == '+') {
            continue;
        }
        else {
            a.push_back(s[i] - '0');
        }
    }
    sort(a.begin(),a.end());
    int n = a.size();
 
    for(int i=0;i<n-1;i++) {
        cout << a[i] << "+";
    }
    cout << a[n-1] << '
';
 
 
 
 
}
 
 int main() {
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     solve();
     
     return 0;
 }