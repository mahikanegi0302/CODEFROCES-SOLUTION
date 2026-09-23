#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int x=-1,y=-1;
        for(int i=0;i<n;i++){
            if(s[i]=='A'&&x==-1) x=i;
            if(s[i]=='B') y=i;
        }
        int ans=(x!=-1&&y!=-1&&x<y)?y-x:0;
        cout<<ans<<"\n";
    }
}