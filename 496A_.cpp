//496A
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int heights[n];
    int hightdiff[n-1];
    int s=0;
    int m=INT_MAX;
    cin>>heights[0];
    for (int i=1;i<n;i++){
        cin>>heights[i];
        hightdiff[i]=heights[i]-heights[i-1];
        s=max(s,hightdiff[i]);
    }
    for(int i=2;i<n;i++){
        m=max(min(m,hightdiff[i]+hightdiff[i-1]),s);
    }
    cout<<m<<endl;
}