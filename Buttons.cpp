#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if(a>b){
            cout<<"First"<<endl;
        }
        else if(b>a){
            cout<<"Second"<<endl;
        }
        else{
            if(c%2==1){
                cout<<"First"<<endl;
            }
            else{
                cout<<"Second"<<endl;
            }
        }
    }
    return 0;
}