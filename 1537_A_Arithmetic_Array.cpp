#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n,sum = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++){
            cin >> arr[i];
            sum += arr[i];
        }
        if (sum == n){
            cout << 0 << endl;
            continue;
        }
        int x = (n + 1) - sum;
        if (x < 0){
            cout << abs(x) + 1 << endl;
        }
        else{
            cout << 1 << endl;
        }
    }
    return 0;
}