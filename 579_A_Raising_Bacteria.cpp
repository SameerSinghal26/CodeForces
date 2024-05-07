#include<bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin>>x;
    int count=0;
    while(x/2!=0){
        if(x%2==1){
            count++;
        }
        x=x/2;
    }
    cout<<count+1;
    return 0;
}