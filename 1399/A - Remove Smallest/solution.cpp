#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve() {
	ll n;
	cin >> n;
	// if(n==1) {
	// 	cout << "YES
";
	// 	return;
	// }
	vector<ll> a(n);
	for(int i=0;i<n;i++) {
		cin >> a[i];
	}
	sort(a.begin(),a.end());
	for(int i=0;i<n-1;i++) {
		if(abs(a[i]-a[i+1]) > 1) {
			cout << "NO
";
			return;
		}
	}
 
	cout << "YES
";
}
 
int main() {
	int tt;
	cin >> tt;
	while(tt--) 
		solve();
	
 
 
	return 0;
 
}