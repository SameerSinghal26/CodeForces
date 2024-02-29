#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string str1,str2;
        cin>>str1>>str2;
        vector<int>ans;
        int sum=0;
        for(int i=0;i<=str2.size();i++){
            int x = str1.find(str2[i]);
            if(x!=-1){
                ans.push_back(x+1);
            }
        }
        for(int i=0;i<ans.size()-1;i++){
            sum += abs(ans[i]-ans[i+1]);
        }
        cout<<sum<<endl;
    }
    return 0;
}