#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve() {
	ll n;
	cin >> n;
	vector<ll> gifts(n);
	for(int i=0;i<n;i++) {
		cin >> gifts[i];
	}
	sort(gifts.begin(),gifts.end());
	cout << gifts[n-1] - gifts[0] << '
';
 
 
}
 
int main() {
	int tt;
	cin >> tt;
	while(tt--) {
		solve();
 
	}
}