#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int count = 0;
        for (int i = 0; i < n; i++){
            if(arr[i]==1){
                count++;
            }
        }
        if(count%2==0){
            cout<<(n-count)+count/2<<endl;
        }
        else{
            cout<<(n-count+1)+count/2<<endl;
        }
    }
    return 0;
}