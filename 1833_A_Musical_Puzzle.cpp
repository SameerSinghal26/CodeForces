#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        set<string>str;
        for(int i=0; i<n-1; i++){
            string check="";
            check += s[i];
            check += s[i+1];
            str.insert(check);
        }
        cout<<str.size()<<endl;
    }
    return 0;
}