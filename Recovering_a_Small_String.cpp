#include <bits/stdc++.h>
using namespace std;

int main() {
     int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string ans="";
        if(n<=27){
            ans='a';
            ans+='a';
            n-=3;
            ans+=('a'+n);
            cout<<ans<<endl;
        }
        else if(n>=28 && n<=53){
            ans='a';
            n-=28;
            ans+=('a'+n);
            ans+='z';
            cout<<ans<<endl;
        }
        else{
            n-=53;
            ans+=('a'+n);
            ans+='z';
            ans+='z';
            cout<<ans<<endl;
        }
    }
    return 0;
}