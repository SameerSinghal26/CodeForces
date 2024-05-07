#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >>n>>k;
        string ans = "";
        for(int i=0; i<n; i++){
            for(int j=0; j<k; j++){
                char temp = 'a';
                temp += j;
                ans.append(1, temp);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}