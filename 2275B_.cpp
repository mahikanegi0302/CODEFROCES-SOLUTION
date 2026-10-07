// B
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
       int n;
       cin>>n;
       string command_arr;
       cin>>command_arr;
       vector<int> ans;
       vector<int> temp;
         for(int i=0;i<n;i++){
            if(command_arr[i]=='1'){
                temp.push_back(i+1);
            }
            if(command_arr[i]=='2'){
                if(!temp.empty()){
                    ans.push_back(temp.back());
                    temp.pop_back();
                }
                else{
                    ans.push_back(i+1);
                }
            }
            if(command_arr[i]=='3'){
                ans.push_back(i+1);
            }
            
         }
         vector<bool> printed(n+1,false);
         for(int i=0;i<ans.size();i++){
            printed[ans[i]]=true;
         }
         int count=0;
 
         for(int i=1;i<=n;i++){
            if(!printed[i]){
                count++;
            }
         }
         cout<<count<<endl;
         for(int i=1;i<=n;i++){
            if(!printed[i]){
                cout<<i<<" ";
            }
         }
        cout<<endl;
    }
    return 0;
}