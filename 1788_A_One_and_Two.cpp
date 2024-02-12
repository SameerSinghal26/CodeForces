#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        vector<int> ans;
        int one=0,two=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]==1){
                one++;
            }
            else{
                two++;
                ans.push_back(i+1);
            }
        }
        if(two&1){
            cout<<-1;
        }
        else{
            if(two == 0){
                cout<<1;
            }
            else{
                int x = (ans.size()/2)-1;
                cout<<ans[x];
            }
        }
        cout<<endl;
    }
    return 0;
}