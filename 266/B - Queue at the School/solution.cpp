#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin>>n;
    int t;
    cin>>t;
    string q;
    cin >> q;
    
 
    while(t--) {
        for(int i = 0;i < n - 1;i++)
        {
            if(q[i] == 'B' && q[i+1] == 'G') {
                swap(q[i], q[i+1]);
                i++;
            } 
        }
    }
    cout << q << '
';
}