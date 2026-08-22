#include <bits/stdc++.h>
using namespace std;
 
int main() {
	long long n,k;
	cin >> n >> k;
	long long cnt = 0;
 
	vector<long long> a(n);
 
	for(int i=0;i<n;i++) {
		cin >> a[i];
	}
 
	sort(a.begin(),a.end());
 
	for(int i=0;i<n;i++) {
		if(a[i]+k<= 5) {
			cnt++;
		}
	}
	cout << cnt / 3 << '
';
 
}