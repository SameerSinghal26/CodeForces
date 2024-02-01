#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        string s;
        cin >> s;
        int count = 0;
        if (s[0] == 121 || s[0] == 89){
            count++;
        }
        if (s[1] == 101 || s[1] == 69){
            count++;
        }
        if (s[2] == 115 || s[2] == 83){
            count++;
        }
        if (count == 3){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}