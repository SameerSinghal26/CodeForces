#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,n;
        cin>>a>>b>>n;
        int sum = 0,c = 0;
        while(sum <= n){
            if(a > b){
                b += a;
                sum = b;
                c++;
            }
            else{
                a += b;
                sum = a;
                c++;
            }
            if(sum > n){
                break;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}