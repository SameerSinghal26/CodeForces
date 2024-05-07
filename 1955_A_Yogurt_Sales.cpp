#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        int mini= (2 * a < b ? (2 * a) : b);
        cout<<(n/2)* mini+(n%2) *a<<endl;
    }
    return 0;
}

// long d = (2 * a < b ? (2 * a) : b);
// printf("%ld\n", (n / 2) * d + (n % 2) * a);
