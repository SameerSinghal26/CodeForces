#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int x;
        unordered_map<int,int> mapp;
        for(int i=0;i<2*n;i++){
            cin>>x;
            if(mapp.find(x)==mapp.end()){
                cout<<x<<" ";
                mapp[x]++;
            }
        }
        cout<<endl;
    }
    return 0;
}