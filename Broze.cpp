#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    string ans;
    for (int i = 0; i < s.size(); i++){
        if (s[i] == '.'){
            ans = ans + '0';
        }
        if (s[i] == '-' && s[i + 1] == '.'){
            ans = ans + '1';
            ++i;
        }
        if (s[i] == '-' && s[i] == '-'){
            ans = ans + '2';
            ++i;
        }
    }
    cout<<ans<<endl;
    return 0;
}