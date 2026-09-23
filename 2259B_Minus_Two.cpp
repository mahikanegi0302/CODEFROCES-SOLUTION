#include <bits/stdc++.h>
using namespace std;
 
int count(int n, vector<int> a) {
    int ans0 = 0, ans1 = 0, ans2 = 0;
 
    for(int i = 0; i < n; i++) {
        if(a[i] % 2 != 0) {
            ans0++;
        }
        else if(a[i] % 4 == 0) {
            ans1++;
        }
        else {
            ans2++;
        }
    }
 
    return max(ans0, max(ans1, ans2));
}
 
int main() {
    int t;
    cin >> t;
 
    while(t--) {
        int n;
        cin >> n;
 
        vector<int> a(n);
 
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
 
        cout << count(n, a) << endl;
    }
 
    return 0;
}