#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        for(int j=0;j<n;j++){
            int b;
            cin >> b;
            string ud;
            cin >> ud;
            for (int i = b-1; i >= 0; i--){
                if (ud[i] == 'U'){
                    if (arr[j] == 0){
                        arr[j] = 9;
                    }
                    else{
                        arr[j]--;
                    }
                }
                else{
                    if (arr[j] == 9){
                        arr[j] = 0;
                    }
                    else{
                        arr[j]++;
                    }
                }
            }
        }
        for (int i = 0; i < n; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}