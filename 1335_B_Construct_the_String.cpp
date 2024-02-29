#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        string str ="";
        char c = 'a';
        for(int i=0;i<n;i++){
            if(i % b == 0){
                c = 'a';
            }
            str += c;
            c = char(c+1);
        }
        cout<<str<<endl;
    }
    return 0;
}