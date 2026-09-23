#include <bits/stdc++.h>
using namespace std;
int main() {
    int red, blue;
    cin >> red >> blue;
    cout << min(red, blue) << endl;
    cout << (max(red, blue) - min(red, blue)) / 2 << endl;
    return 0;
}