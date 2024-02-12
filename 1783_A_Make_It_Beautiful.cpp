#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        int ans[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        bool flag = true;
        for (int i = 1; i < n; i++) {
            if (arr[i] != arr[i - 1]){
                flag = false;
            }
        }
        if (flag) {
            cout << "NO" << endl;
        } 
        else {
            cout << "YES" << endl;
            int j = 0;
            for (int i = n - 1; i >= 0; i--) {
                ans[j] = arr[i];
                j++;
            }
            if (ans[0] == ans[1]) {
                swap(ans[1], ans[n - 1]);
            }
            for (int i = 0; i < n; i++) {
                cout << ans[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}