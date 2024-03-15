#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int t;
    cin >> t;
    while (t--){
        long long int a, b;
        cin>>a>>b;
        long long int x = abs(a - b);
        if (a > b){
            cout<<x<<" "<<min(x-(a%x),b%x)<<endl;
        }
        else if (b > a){
            cout<<x<<" "<<min(x-(b%x),a%x)<<endl;
        }
        else{
            cout<<0<<" "<<0<<endl;
        }
    }
    return 0;
}