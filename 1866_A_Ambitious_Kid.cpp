#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    long long arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int mini=INT_MAX;
    for(int i=0;i<n;i++){
        int x=abs(arr[i]);
        mini=min(mini, x);
    }
    cout<<mini<<endl;
    return 0;
}