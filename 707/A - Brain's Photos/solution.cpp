#include <iostream>
using namespace std;
 
int main() {
    int n,m;
    cin>>n>>m;
    char arr[n][m];
 
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cin >> arr[i][j];
        }
    }
 
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            if(arr[i][j] != 'B' && arr[i][j] != 'W' && arr[i][j]  != 'G') {
                cout << "#Color
";
                return 0;
            }
        }
    }
 
    cout << "#Black&White
";
 
    return 0;
}