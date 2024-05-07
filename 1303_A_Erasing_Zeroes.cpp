#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string str,a;
        cin>>str;
        int count=0,pos=0,pos2=0;
        for(int i=0; i<str.length(); i++){
            if(str[i]=='1'){
                pos=i;
                break;
            }
        }
        for(int i=str.length(); i>=pos; i--){
            if(str[i]=='1'){
                pos2=i;
                break;
            }
        }
        for(int i=pos; i<pos2; i++){
            if(str[i]=='0'){
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}