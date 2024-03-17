#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        string str = to_string(n);
        int ans = str.size();
        bool flag = false;
        int curr = 0;
        for(int i=str.size()-1; i>=0; i--){
            if(!flag && str[i]=='5'){
                flag=true;
            }
            else if(flag && (str[i]=='2'||str[i]=='7')){
                ans = min(ans, curr);
                break;
            }
            else{
                curr++;
            }
        }
        flag = false;
        curr = 0;
        for(int i=str.size()-1; i>=0; i--){
            if(!flag && str[i]=='0'){
                flag=true;
            }
            else if(flag && (str[i]=='5'||str[i]=='0')){
                ans = min(ans, curr);
                break;
            }
            else{
                curr++;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}