#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n, k;
        cin >> n >> k;
        string str;
        cin >> str;
        unordered_map<char, int> m;
        for (int i = 0; i < n; i++){
            m[str[i]]++;
        }
        int even=0,odd=0;
        for (auto i : m){
            even += (i.second / 2) * 2;
            if (i.second % 2 == 1){
                odd++;
            }
        }
        if (k >= odd - 1){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}