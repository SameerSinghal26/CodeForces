#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k = 3;
    string str,ans;
    cin>>n;
    cin>>str;
    if(n >= 2){
        ans += str[0];
        ans += str[1];
    }
    else{
        ans += str[0];
    }
    for(int i=3; i<n;){
        ans += str[i];
        i += k;
        k++;
    }
    cout<<ans<<endl;
    return 0;
}