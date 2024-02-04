#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int count1=0,count2=0;
        int ans=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]==1){
                count1++;
            }
            else{
                count2++;
            }
        }
        while(count1-count2<0 || count2%2){
            count1++;
            count2--;
            ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}