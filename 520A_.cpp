 #include <bits/stdc++.h>
 using namespace std;
 int main(){
    int n;
    cin>>n;
    char s[n];
    for(int i=0; i<n; i++){
        cin>>s[i];
    }
    if (n<26){
        cout<<"NO"<<endl;
        return 0;
    }
    bool arr[26]={false};
    for(int i=0; i<n; i++){
        if(s[i]>='A' && s[i]<='Z'){
            arr[s[i]-'A']=true;
        }
        else if(s[i]>='a' && s[i]<='z'){
            arr[s[i]-'a']=true;
        }
    }
    for(int i=0; i<26; i++){
        if(arr[i]==false){
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
 }