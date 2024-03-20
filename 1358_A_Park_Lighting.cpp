#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t; 
    while(t--){
        int n,m,ans=0,x,y;
        cin>>n>>m;
        x = n*(m+1) + m*(n+1);
        y = (n+1) * (m+1);
        ans = (x-y)/2 + 1;
        cout<<ans<<endl;
    }
    return 0;
}