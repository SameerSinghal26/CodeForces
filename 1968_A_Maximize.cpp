#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int ans = 1;
        int x = 1;
        for(int i=1; i<n; i++){
            if((__gcd(n, i)) >= x){
                x = __gcd(n, i);
                ans = i;
            }
        }
        cout << ans << endl;
    }
    return 0;
}