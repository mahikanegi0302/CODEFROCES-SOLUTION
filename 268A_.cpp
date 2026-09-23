//268A
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> a(2*n);
    for (int i=0;i<2*n;i++) {
        cin >> a[i];
    }
    int samejersey = 0;
    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            if (a[2*i] == a[2*j+1]) {
                samejersey++;
            }
        }
    }
    cout<<samejersey;
    return 0;
}