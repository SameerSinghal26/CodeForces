#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
    string str;
    cin>>str;
    bool flag=0;
    for(int i=1; i<str.size(); ++i){
        if(str[i]!=str[0]){
            swap(str[i],str[0]);
            flag=1;
            break;
        }
    }
    if(flag){
        cout<<"YES"<<endl<<str<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    }
    return 0;
}