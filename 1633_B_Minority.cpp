#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        int a=0,b=0;
        for(int i=0;i<str.size();i++){
            if(str[i]=='1'){
                a++;
            }
            else{
                b++;
            }
        }
        if(a>b){
            cout<<b<<endl;
        }
        else if(b>a){
            cout<<a<<endl;
        }
        else if(a==b){
            a=a-1;
            cout<<a<<endl;
        }
    }
    return 0;
}