#include <iostream>
#include <set>
using namespace std;
 
int main() {
    string s;
    cin >> s;
 
    set<char> distinct;
    for (char c : s) {
        distinct.insert(c);
    }
 
    if (distinct.size() % 2 == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";
 
    return 0;
}