#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        long long x, y, a, b;
        cin >> x >> y >> a >> b;
        if (2 * a < b){
            cout << (a * x + y * a) << endl;
            continue;
        }
        else{
            cout << ((max(x, y) - min(x, y)) * a + min(x, y) * b) << endl;
        }
    }
    return 0;
}