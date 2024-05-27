#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    vector<int>vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    if(n==1){
        cout<<0<<endl;
        continue;
    }
    int maxi=INT_MIN;
    for(int i=1; i<n; ++i){
        maxi = max(maxi, vec[i-1]-vec[i]);
    }
    for(int i=1; i<n; ++i){
        maxi = max(maxi, vec[i]-vec[0]);
    }
    for(int i=0; i<n-1; ++i){
        maxi= max(maxi, vec[n-1]-vec[i]);
    }
    cout<<maxi<<endl;
    }
    return 0;
}