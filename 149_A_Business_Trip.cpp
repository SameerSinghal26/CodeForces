#include<bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cin>>a;
    int arr[12];
    int sum=0,count=0;
    bool flag=false;
    for(int i=0;i<12;i++){
        cin>>arr[i];
    }
    if(a == 0){
        cout<< 0 <<endl;
    }
    else{
        sort(arr,arr+12);
        for(int i=11;i>=0;i--){
            sum+=arr[i];
            count++;
            if(sum>=a){
                flag=true;
                break;
            }
        }
        if(flag){
            cout<<count<<endl;
        }
        else{
            cout<< -1 <<endl;
        }
    }
    return 0;
}