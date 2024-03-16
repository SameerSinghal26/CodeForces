#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n,x,c;
        cin>>n>>x;
        vector<long long> ans;
        long long mini=0,maxi=0,sum=0;
        for(long long i=0; i<n; i++){
            cin>>c;
            ans.push_back(c);
            sum +=c;
            maxi += c/x;
            if(c%x != 0){
                maxi++;
            }
        }
        mini = (sum / x);
        if(sum % x != 0){
            mini++;
        }
        cout<<mini<<" "<<maxi<<endl;
    }
    return 0;
}