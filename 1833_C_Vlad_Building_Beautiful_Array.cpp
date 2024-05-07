#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int c=0,c1=0;
        for(int i=0;i<n;i++){
            if(arr[0]%2==1){
                c=1;
                break;
            }
            else{
                if(arr[i]%2==1){
                    c1++;
                }
            }
        }
        if(c1==0 || c==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}