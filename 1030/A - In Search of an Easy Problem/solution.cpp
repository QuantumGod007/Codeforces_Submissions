#include <iostream>
using namespace std;
 
int main() {
    int N;
    cin >> N;
 
    int val = 0;
 
    for (int i = 0; i < N; i++) {
        cin >> val;
 
        if (val == 1) {
            break;
        }
    }
 
    if (val == 0) 
        cout << "EASY";
    else 
        cout << "HARD";
 
    return 0;
}