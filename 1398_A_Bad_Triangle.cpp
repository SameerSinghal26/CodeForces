#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=1; i<=n; i++){
            cin>>arr[i];
        }
        int idx1 = 0,idx2 = 0,idx3 = 0,sum = 0,flag = 0;
        sum = arr[1]+arr[2];
        idx1 = 1,idx2 = 2;
        for(int i=3; i<=n; i++){
            if(arr[i] >= sum){
                idx3 = i;
                flag = 1;
                break;
            }
        }
        if(flag == 1){
            cout<<idx1<<" "<<idx2<<" "<<idx3<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    return 0;
}