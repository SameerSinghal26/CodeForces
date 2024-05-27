#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    int arr[30];
    int r = 2;
    for (int i = 0; i < 30; i++){
        arr[i] = r;
        r *= 2;
    }
    while (t--){
        int n;
        cin >> n;
        int asum=0, bsum=0;
        for (int i = 0; i < n / 2 - 1; i++){
            asum += arr[i];
        }
        asum += arr[n - 1];
        for (int i = n / 2 - 1; i < n - 1; i++){
            bsum += arr[i];
        }
        int diff = 0;
        if(asum - bsum >= 0){
            diff=(asum - bsum);
        }
        else{
            (bsum - asum);
        }
        cout << diff << endl;
    }
    return 0;
}