//  266A
#include <bits/stdc++.h>
using namespace std;
int main(){
    char cur;
    char prev='\0';
    int n;
    cin>>n;
    int mintoberemoved=0;
    for (int i =0;i<n;i++){
        cin>>cur;
        if(cur==prev){
            mintoberemoved++;
        }
        else {
         prev=cur;
        }
    }
    cout<< mintoberemoved;
    return 0;
}