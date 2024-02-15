#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,p,q;
        cin >> n >> p >> q;
        if(p==q && q==n){
            cout<<"YES"<<endl;
        }
        else{
            if(n-(p+q) >= 2){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}