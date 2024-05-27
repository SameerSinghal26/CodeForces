#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long l,r;
        cin>>l>>r;
        long long a = 0,d = 0;
        if(l*2 <= r){
            a = l;
            d = l * 2;
        }
        else{
            a = -1;
            d = -1;
        }
        cout<<a<<" "<<d<<endl;
    }
    return 0;
}