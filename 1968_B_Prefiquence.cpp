#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        vector<char> vec1(n);
        vector<char> vec2(m);
        for (int i = 0; i < n; i++) {
            cin >> vec1[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> vec2[i];
        }
        int i = 0, j = 0, ans = 0;
        while (i < n && j < m) {
            if (vec1[i] == vec2[j]) {
                i++;
                ans++;
            }
            j++;
        }
        cout << ans << endl;
    }
    return 0;
}