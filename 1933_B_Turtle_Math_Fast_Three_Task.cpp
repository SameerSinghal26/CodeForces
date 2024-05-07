#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int sum=0,ans;
        map<int,int> mpp;
        int a=-1,b=-1;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            mpp[x]++;
            if(x%3==1){
                a=x;
            }
            if(x%3==2){
                b=x;
            }
            sum+=abs(x);
        }
        int rem=sum%3;
        if(rem==0){
            ans=0;
        }
        else if((sum-a)%3==0 || (sum-b)%3==0 ){
            ans=1;
        }
        else if(rem==1){
            ans=2;
        }
        cout<<ans<<endl;
    }
    return 0;
}