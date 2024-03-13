#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--) {
        int n, m, x;
        cin >> n >> m >> x;
        vector<pair<int, char>> res(m);
        for (int i = 0; i < m; i++) {
            cin >> res[i].first >> res[i].second;
        }
        set<int> pos;
        pos.insert(x);
        for (int i = 0; i < m; i++) {
            set<int> pos2;
            for (int j : pos) {
                if (res[i].second == '0') {
                    pos2.insert((j + res[i].first - 1) % n + 1);
                }
                else if (res[i].second == '1') {
                    pos2.insert((j - res[i].first + n - 1) % n + 1);
                }
                else {
                    pos2.insert((j + res[i].first - 1) % n + 1);
                    pos2.insert((j - res[i].first + n - 1) % n + 1);
                }
            }
            pos = pos2;
        }
        cout << pos.size() << endl;
        for (int i : pos) {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}