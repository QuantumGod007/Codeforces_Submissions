#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    long long n;
    cin >> n;
    vector<long long> a(n);
    vector<long long> freq(1e5 + 1, 0);
    int freq_cnt = freq.size();
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        freq[a[i]]++;
    }
   
    int distinct = 0;
    int c1 = 0, c2 = 0;
    for(int i=0;i<freq_cnt;i++) {
        if(freq[i] > 0) {
            distinct++;
            if(distinct == 1) {
                c1 = freq[i];           
            }
            else if (distinct == 2) {
                c2 = freq[i];
            }
            else {
                cout << "No
";
                return;
            }
        }
   }
   if (distinct == 1) 
        cout << "Yes
";
 
   else if(abs(c1 - c2) <= 1) 
        cout << "Yes
";
   
   else 
        cout << "No
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