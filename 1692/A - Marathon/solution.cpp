#include <bits/stdc++.h>
using namespace std;
 
void solve() {
	long long a,b,c,d;
	cin>>a>>b>>c>>d;
	int place = 0;
	if(a<b) 
		place++;
	if(a<c)
		place++;
	if(a<d)
		place++;
 
	cout << place << '
';
}
 
int main() {
	int tt;
	cin >> tt;
	while(tt--) {
		solve();
 
	}
	return 0;
}