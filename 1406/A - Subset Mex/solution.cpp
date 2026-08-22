#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i=0;i<n;i++) {
            cin>>a[i];
        }
        int freq[101] = {0};
        for(int i=0;i<n;i++) {
            freq[a[i]]++;
        }
        int mexa = 0;
        int mexb = 0;
        
 
        while(freq[mexa] >= 1) {
            mexa++;
        }
        while(freq[mexb] >= 2) {
            mexb++;
        }
 
        cout << mexa + mexb << '
';
 
 
        
 
    }
}