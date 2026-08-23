#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve() {
	ll a,b;
	cin >> a >> b;
	if(a % 2 != 0 && b % 2 != 0) 
		cout << "NO
";
	
	else 
		cout << "YES
";
	
}
 
int main() {
	int tt;
	cin >> tt;
	while(tt--) {
		solve();
	}
	return 0;
}