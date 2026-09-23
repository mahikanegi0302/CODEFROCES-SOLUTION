//427 A
#include <bits/stdc++.h>
using namespace std;
int main() {
    int m;
    cin >> m;
    vector <int> a(m);
    for (int i = 0; i < m; i++) {
        cin >> a[i];
    }
    int policeman=0;
    int untreated_day=0;
    for(int i=0;i<m;i++){
        if(policeman==0 && a[i]<0 ){
           untreated_day+=abs(a[i]);
        }
        else if(policeman!=0 && a[i]<0){
            policeman = policeman + a[i];
            if(policeman < 0) {
                untreated_day += abs(policeman); 
                policeman = 0;                 
            }
        }
        else if(a[i]>0){
            policeman=policeman+a[i];
        }
    }
 
    cout<<untreated_day;
return 0;
}