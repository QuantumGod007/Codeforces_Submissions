#include <bits/stdc++.h>
using namespace std;
 
int main(){
	long long n;
	cin >> n;
 
	int i = 1;
	int level = 1;
 
	while (n >= level) {
	    n -= level;
	    i++;
	    level += i;
	}
 
	cout << i - 1 << '
';
 
	return 0;
 
}