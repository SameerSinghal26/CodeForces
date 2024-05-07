#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
       int n,k=0;
       cin>>n;
       while(n!=0){
        k=n-1;
        n= n & k;
       }
       cout<<k<<endl;
    }

    return 0;
}