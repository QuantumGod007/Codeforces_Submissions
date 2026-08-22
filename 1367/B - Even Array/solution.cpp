#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int T;
    cin>>T;
    while(T--) {
        int n;
        cin>>n;
        int ei = 0;
        int oi = 0;
        int ev = 0;
        int ov = 0;
        vector<int> arr(n);
        int noe = 0;
 
        for(int i=0;i<n;i++) {
            cin >> arr[i];
            if(arr[i] % 2 == 0)
                ev++;
            else
                ov++;
            if(i % 2 == 0)
                ei++;
            else 
                oi++;
 
            if(arr[i]%2 != i%2) {
                noe++;
            }
        
        }
        if(ev != ei || ov != oi) {
            cout << -1 << endl;
        }
        else {
            cout << noe/2 << '
';
        }
        }
        
 
    }
 