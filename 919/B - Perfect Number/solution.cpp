#include <bits/stdc++.h>
using namespace std;
 
int digitSum(int x) {
    int sum = 0;
    while (x > 0) {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int k;
    cin >> k;
 
    int cnt = 0;
 
    for (int num = 19;; num++) {
        if (digitSum(num) == 10) {
            cnt++;
            if (cnt == k) {
                cout << num << '
';
                break;
            }
        }
    }
 
    return 0;
}