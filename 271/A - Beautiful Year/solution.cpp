#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int y;
    cin>>y;
 
    for(int i=y+1;i<=10000;i++) {
        int freq[10] = {0};
 
        bool beauti = true;
        int year = i;
        while(year>0) {
            int digit = year % 10;
            freq[digit]++;
            year /= 10;
        }
        for(int k=0;k<10;k++){
            if(freq[k] > 1) {
                beauti = false;
                break;
            } 
        }
        if(beauti) {
            cout<<i;
            break;
        }
 
       
 
 
    }
 
 
}