#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n < 10){
            cout << n << endl;
        }
        else{
            int res = 0;
            int x = n;
            while(x!=0){    
                res++;
                x/=10;
            }
            int ans = 0;
            res--;
            ans += 9*res;
            ans += n/(pow(10, res));
            cout << ans << endl;
        }
    }
    return 0;
}