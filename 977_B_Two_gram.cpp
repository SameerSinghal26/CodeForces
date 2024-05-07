#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string str;
    cin >> n >> str;
    int count = 0;
    string ans = "";
    for (char c1 = 'A'; c1 <= 'Z'; ++c1){
        for (char c2 = 'A'; c2 <= 'Z'; ++c2){
            int cur = 0;
            for (int i = 0; i < n - 1; ++i){
                cur += (c1 == str[i] && c2 == str[i + 1]);
            }
            if (cur > count){
                count = cur;
                ans = "";
                ans += c1;
                ans += c2;
            }
        }
    }
    cout << ans << endl;
    return 0;
}