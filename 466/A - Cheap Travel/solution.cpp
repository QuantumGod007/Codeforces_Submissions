#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    int a1 = n*a;
    int a2 = ((n+m-1)/m)*b;
 
    int a3 = (n/m)*b+(n%m)*a;
 
    cout << min({a1, a2, a3});
 
    return 0;
}