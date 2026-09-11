#include <iostream>
#include <string>
#include <unordered_map>
 
using namespace std;
 
int main() {
    int n;
    string s;
    cin >> n >> s;
 
    unordered_map<string, int> counts;
    string max_gram = "";
    int max_count = 0;
 
    for (int i = 0; i < n - 1; i++) {
        string gram = s.substr(i, 2); 
        counts[gram]++;
 
        if (counts[gram] > max_count) {
            max_count = counts[gram];
            max_gram = gram;
        }
    }
 
    cout << max_gram << endl;
 
    return 0;
}