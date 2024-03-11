#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        for(char i=49;i<=56;i++){
            if(i!=str[1]){
                cout<<str[0]<<i<<endl;
            }
        }
        for(char i=97;i<=104;i++){
            if(i!=str[0]){
                cout<<i<<str[1]<<endl;
            }
        }
    }
    return 0;
}