#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<int> a(n);
 
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
 
        // letter -> number of times it has appeared
        map<char, int> freq;
 
        // Initially, every letter has appeared 0 times
        for (char ch = 'a'; ch <= 'z'; ch++) {
            freq[ch] = 0;
        }
 
        string s = "";
 
        for (int i = 0; i < n; i++) {
 
            // Find a letter whose current frequency is a[i]
            for (char ch = 'a'; ch <= 'z'; ch++) {
 
                if (freq[ch] == a[i]) {
                    s += ch;
 
                    // This letter has now appeared one more time
                    freq[ch]++;
 
                    break;
                }
            }
        }
 
        cout << s << '\n';
    }
 
    return 0;
}