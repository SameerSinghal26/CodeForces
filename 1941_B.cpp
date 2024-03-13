#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        for (int i = 1; i < n - 1; i++) {
            if (arr[i - 1] <= arr[i + 1] && arr[i] >= 2 * arr[i - 1]) {
                arr[i + 1] -= arr[i - 1];
                arr[i] -= 2 * arr[i - 1];
                arr[i - 1] = 0;
            }
        }
        bool check = true;
        for (int i = 0; i < arr.size();i++) {
            if (arr[i] != 0) {
                check = false;
                break;
            }
        }
        if(check){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}