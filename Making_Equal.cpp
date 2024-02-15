#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        int sum = 0;
        for (int i = 0; i < n; i++){
            cin >> arr[i];
            sum += arr[i];
        }
        int k = sum / n;
        int half = 0;
        bool temp = true;
        for (int i = 0; i < n; i++){
            if (arr[i] > k){
                half += arr[i] - k;
            }
            else if (arr[i] < k){
                if (half >= k - arr[i]){
                    half -= (k - arr[i]);
                }
                else{
                    temp = false;
                    break;
                }
            }
        }
        if (temp){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}