#include<bits/stdc++.h>
using namespace std;

int main(){
    int t = 0;
    cin >> t;
    while(t--){
        int n = 0, cnt = 0;
        cin >> n;
        for(int i = 0; i < n; i++){
            int a = 0, b = 0;
            cin >> a >> b;
            if(b < a){
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}