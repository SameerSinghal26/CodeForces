#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int ans[n];
        for (int i=0;i<n;i++){
           cin>>ans[i];
           if(ans[i] == 1){
                ans[i]++;
            }
        }
        for (int i=1;i<n;i++){
            if (ans[i] % ans[i - 1] == 0){
                ans[i]++;
            }
        }
        for (int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout << endl;
    }
    return 0;
}