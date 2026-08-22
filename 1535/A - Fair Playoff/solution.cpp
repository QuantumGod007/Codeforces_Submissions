#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int s1, s2, s3, s4;
        cin >> s1 >> s2 >> s3 >> s4;
 
        int w1 = max(s1, s2);
        int w2 = max(s3, s4);
 
        vector<int> v = {s1, s2, s3, s4};
        sort(v.begin(), v.end());
 
        if (min(w1, w2) == v[2] && max(w1, w2) == v[3])
            cout << "YES
";
        else
            cout << "NO
";
    }
}