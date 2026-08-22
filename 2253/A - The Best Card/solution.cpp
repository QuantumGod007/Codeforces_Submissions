#include <bits/stdc++.h>
using namespace std;
 
bool isPrime(long long n) {
	for(int i=2;i*i<=n;i++) {
		if (n < 2) return false;
		if(n%i==0) {
			return false;
		}	
	}
	return true;
}
 
 
void solve() {
	long long n;
	cin >> n;
	if(isPrime(n+1)) 
		cout << "YES
";
	
	else
		cout << "NO
";
 
 
 
}
 
int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}