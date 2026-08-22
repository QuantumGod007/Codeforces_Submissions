#include <iostream>
using namespace std;
 
int main() {
    long long n,k;
    cin >> n >> k;
 
    int i=1;
    long long mini = 10;
    while(i < 10) {
        if((((n*i)-k)%10==0) || (n * i % 10) == 0 ){
            mini = i;
            break;
        }
        i++;
    }
 
    cout << mini << '
';
}