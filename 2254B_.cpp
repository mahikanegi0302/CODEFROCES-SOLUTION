#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n>>s;
        int ans=1;
        for(int i=1;i<n;i++){
            if(s[i]!=s[i-1]){
                ans++;
            }
        }
        int best=0;
        for(int i=1;i<n-1;i++){
            if(s[i]!=s[i-1]&&s[i]!=s[i+1]){
                int red=(s[i-1]==s[i+1])?2:1;
                if(red>best) best=red;
            }
        }
        ans-=best;
        cout<<ans<<'\n';
    }
    return 0;
}