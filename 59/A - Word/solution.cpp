#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    cin >> s;
 
    int n = s.length();
    int lower=0;
    int upper=0;
 
    for(int i=0;i<n;i++) {
        if(s[i] >= 'a' && s[i] <= 'z')
            lower++;
        else 
            upper++;     
    }
    if(lower >= upper) {
        for(int i=0;i<n;i++) 
            s[i] = tolower(s[i]);             
    }
    else {
        for(int i=0;i<n;i++) 
            s[i] = toupper(s[i]);
 
    }
 
    cout << s << endl;
 
 
    }
 