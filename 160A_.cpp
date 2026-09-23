#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    int total_sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        total_sum += a[i];
    }
    sort(a.begin(),a.end(),greater<int>());
    int my_sum = 0;
    int count = 0;
    for (int i = 0; i < n; i++) {
        my_sum += a[i];
        count++;
        if (my_sum > total_sum - my_sum) {
            break;
        }
    }
    cout<<count;
    return 0;
}