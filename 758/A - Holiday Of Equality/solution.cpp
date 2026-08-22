#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    vector<int> people(n);
    int maxis = INT_MIN;
 
    for(int i=0;i<n;i++) {
        cin >> people[i];
        maxis = max(maxis,people[i]);
    }
 
    int count = 0;
    for(int i=0;i<n;i++) {
 
        while (people[i] != maxis) {
            count++;
            people[i]++;
        }
    }
    cout << count << '
';
 
 
    
}