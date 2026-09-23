#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin >>s;
        int ans=0;
        for (int i=0;i<n;i+=k){
            bool farms=true;
            for (int j=i;j<i+k;j++){
                if (s[j]=='0') {
                    farms=false;
                    break;
                }
            }
            if(farms){
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}