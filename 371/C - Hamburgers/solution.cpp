#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
bool checker(int hb, int hs, int hc, int pb, int ps, int pc, ll r, ll mid,int cb, int cs, int cc) {
   
    ll wb = cb * mid;
    ll ws = cs * mid;
    ll wc = cc * mid;
    ll rb = 0;
    ll rs = 0;
    ll rc = 0;
    if(wb - hb > 0) {
        rb = (wb - hb) * pb;
    }
    if(ws - hs > 0) {
        rs = (ws - hs) * ps;
    }
    if(wc - hc > 0) {
        rc = (wc - hc) * pc;
    }
    if(rc + rb + rs <= r) return true;
    return false;
 
 
 
}
 
 
void solve() {
    string s;
    cin >> s;
    int hb,hs,hc,pb,ps,pc;
    cin >> hb >> hs >> hc >> pb >> ps >> pc;
    ll r;
    cin >> r;
 
    int cb = 0, cs = 0, cc = 0;
 
     for(int i=0;i<s.length();i++) {
        if(s[i] == 'B') cb++;
        else if(s[i] == 'S') cs++;
        else cc++;
    }
 
    ll low = 0;
    ll high = 1e13;
    while(low <= high) {
        ll mid = low + (high - low)/2;
        if(checker(hb, hs, hc, pb, ps, pc, r, mid,cb,cs,cc)) {
            low = mid + 1;
        }
        else high = mid - 1;
    }
    cout << high << "
";
 
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    solve();
 
    return 0;
}