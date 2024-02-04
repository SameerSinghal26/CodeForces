#include<bits/stdc++.h>
using namespace std;

int main(){
    int k,r,num=0;
    bool flag= true;
    cin>>k>>r;
    while (flag){
        num++;
        if(num*k%10==0||num*k%10==r){
            flag= false;
        }
    }
    cout<<num;
    return 0;
}