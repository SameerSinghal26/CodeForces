#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        long long n;
        cin >> n;
        long long l =  2;
        while (l * l <= n) {
            if (n % l ==  0) {
                break;
            }
            l++;
        }
        long long r = n / l;
        long long interval_size = r - l +  1;
        
        cout << interval_size << endl;
    }
    return 0;
}