#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        int min = 0;
        for (int i = 0; i < n; i++) {
            if (s.substr(i, 3) == "pie" || s.substr(i, 3) == "map") {
                min += 3;
                i += 2;
            }
        }
        cout << min/3 << endl;
    }
    return 0;
}