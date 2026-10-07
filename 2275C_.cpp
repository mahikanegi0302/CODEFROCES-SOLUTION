#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
 
    while(t--){
        int n;
        cin>>n;
 
        vector<long long> a(n);
 
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
 
        map<long long,long long> mp;
        long long ans=0;
 
        for(int i=0;i+4<n;i++){
 
            long long love = a[i] + a[i+2] - a[i+4];
 
            ans += mp[love];
 
            for(int j=i-2;j>=max(0,i-4);j-=2){   // only i-2 and i-4 overlap
                long long prev = a[j] + a[j+2] - a[j+4];
 
                if(prev==love){
                    ans--;
                }
            }
 
            mp[love]++;
        }
 
        cout<<ans<<"\n";
    }
 
    return 0;
}