#include <iostream>
#include <string>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while(t > 0) {
    int n;
    cin >> n;
    int k;
    cin >> k;
    string opinion[n];
    int count = 1;
 
    for (int i = 0; i < n; i++){
        cin >> opinion[i];
    }
    for (int i = 1; i < n; i++) {
        if (opinion[0] == opinion[i]) {
            count++;
        }
    }
    cout << count << '
';
    t--;
}
}