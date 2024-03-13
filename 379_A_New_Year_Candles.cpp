#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    cin>>a>>b;
    int ans = a;
    while (a / b != 0){
        int rem = a;
        ans += a/b;
        a /= b;
        a += rem % b;
    }
    cout << ans << endl;
    return 0;
}