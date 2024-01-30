#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        string str;
        cin >> str;
        int ans = 0;
        for (int i = 0; i < n; i++){
            ans = max(ans, str[i] - 'a' + 1);
        }
        cout << ans << endl;
    }
    return 0;
}