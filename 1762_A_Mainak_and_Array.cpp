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
        int mini=INT_MAX, maxi=INT_MIN;
        for(int i=00;i<n-1;i++){
            mini= min(mini,arr[i]);
        }
        maxi=max(maxi,arr[n-1]-mini);
        int maxi2=0;
        for(int i=n-1;i>0;i--){
            maxi2= max(maxi2,arr[i]);
        }
    }
    return 0;
}