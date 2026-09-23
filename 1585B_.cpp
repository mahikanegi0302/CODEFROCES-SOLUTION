// 1585 B
#include <bits/stdc++.h>
using namespace std;
int main(){
    int no_array;
    cin>>no_array;
    vector<int> ans;
    while(no_array>0){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int count=0;
        int max=arr[n-1];
        for(int i=n-2;i>=0;i--){
            if(arr[i]>max){
                count++;
                max=arr[i];
            }
        }
        ans.push_back(count);
        no_array--;
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }
}