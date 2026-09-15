#include <iostream>
#include <algorithm> // Required for std::max
 
using namespace std;
 
void solve() {
    long long n;
    cin >> n;
 
    long long option1 = n;
 
    long long option2 = n / 10;
 
    long long option3 = (n / 100) * 10 + (n % 10);
 
    // Print the maximum of the three options
    cout << max({option1, option2, option3}) << '
';
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    solve();
 
    return 0;
}