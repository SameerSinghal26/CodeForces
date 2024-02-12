#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> ans(n);
        for(int i=0; i<n; i++){
            cin >> ans[i];
        }
        int count = 0;
        for(int i=0; i<=n-2; i++){
            if(ans[i]%2 == 0 && ans[i+1]%2 == 0){
                count++;
            }
            else if(ans[i]%2 == 1 && ans[i+1]%2 == 1){
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}