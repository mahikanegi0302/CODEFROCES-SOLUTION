//1833
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        pair<int,int> a[n];
        int b[n];
        int ans[n];
        for(int i=0;i<n;i++){
            cin>>a[i].first;
            a[i].second=i;
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        sort(a,a+n);
        sort(b,b+n);
 
        for(int i=0;i<n;i++){
            ans[a[i].second]=b[i];
        }
        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}