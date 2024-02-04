#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--){
        int n, x = 3;
        cin >> n;
        while (n % x != 0){
            x = (2 * x) + 1;
        }
        cout << (n / x) << endl;
    }
    return 0;
}