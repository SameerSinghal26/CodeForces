#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> vec(n);
        for(int i=0;i<n;i++){
            cin>>vec[i];
        }
        unordered_map<int, int> mpp;
        int ans = 0;
        for (int i=0;i<n;i++){
            mpp[vec[i]]++;
            if (mpp[vec[i]] == 2) {
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
