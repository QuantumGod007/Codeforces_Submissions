#include <iostream>
using namespace std;
 
void solve() {
    long long n;
    cin >> n;
    long long m;
    cin >> m;
    bool change = true;
    int l=0;
    int f=0;
    int cnt = 0;
    for(int i=0;i<n;i++) {
        cnt=0;
        for(int j=0;j<m;j++) {
            if(i%2==0)
                cout<<"#";
            else if(i%2!=0&&j==m-1 && change && cnt==0) {
                cout <<"#";
                change=false;
                cnt++;
            }
            else if(i%2!=0&&j==0&& !change && cnt==0) {
                cout <<"#";
                change=true;
                cnt++;
            }
            else 
                cout<<".";
        }
        cout << endl;
    }
    
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    solve();
 
    return 0;
}