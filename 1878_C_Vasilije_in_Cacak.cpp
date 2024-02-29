#include<bits/stdc++.h>
using namespace std;
 
int main(){
 
    int t;
    cin >> t;
    while(t--){
        long long int n, k, x;
        cin >> n >> k >> x;
        long long one = (k*(1+k))/2;
        long long two = (k*(n+((n-k)+1)))/2;
        if(x >= one && x <= two){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}