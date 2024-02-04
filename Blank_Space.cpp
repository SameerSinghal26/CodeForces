#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int count=0,ans=0;
        for (int i = 0; i < n; i++){
            cin >> arr[i];
            if (arr[i] == 0)
                count = 1;
        }
        if (count == 0){
            cout << 0 << endl;
        }
        else{
            int temp = count;
            int ans = count;
            for (int i = 0; i < n - 1; i++){
                if (arr[i] == 0 && arr[i + 1] == 0){
                    count++;
                    if (count >= ans){
                        ans = count;
                    }
                }
                else{
                    count = temp;
                }
            }
            cout << ans << endl;
        }

    }
    return 0;
}