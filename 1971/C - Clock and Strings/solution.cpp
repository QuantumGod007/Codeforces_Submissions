#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--) {
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int i = a;
    bool cinside = false;
    bool dinside = false;
    while (i != b) {
        i = (i % 12) + 1;
        if (i==c) {
            cinside = true; 
        }
        else if (i == d){
            dinside = true;
        }
    }
    if (cinside == true && dinside == false || cinside == false && dinside == true) {
        cout << "YES
";
    }
    else {
        cout << "NO
";
    }
}
 
}