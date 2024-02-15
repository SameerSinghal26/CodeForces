#include <bits/stdc++.h>
using namespace std;

int mini(vector<int>& a) {
    int n = a.size();
    sort(a.begin(), a.end());
    int prev = a[0], cost = 0, ind = 0;
    for (int i = 1; i < n; ++i) {
        if (a[i] != prev) {
            cost += min(i - ind + 1, n - i);
            prev = a[i];
            ind = i;
        }
    }
    return cost;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        int result = mini(a);
        cout << result << endl;
    }
    return  0;
}
