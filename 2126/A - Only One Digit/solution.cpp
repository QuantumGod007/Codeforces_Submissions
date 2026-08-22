#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int x;
        cin >> x;
 
        int smallest = 9;
 
        while (x != 0) {
            int digit = x % 10;
            if (digit < smallest) {
                smallest = digit;
            }
            x = x / 10;
        }
 
        cout << smallest << endl;
    }
 
    return 0;
}