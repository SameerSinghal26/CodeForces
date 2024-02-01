#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n + 9];
    cin >> a[0];
    for (int i = 1; i < n; i++){
        cin >> a[i];
        a[i] += a[i - 1];
    }
    int m;
    cin >> m;
    for (int i = 0; i < m; i++){
        int v;
        cin >> v;
        int l = lower_bound(a, a + n, v) - a;
        cout << l + 1 << endl;
    }
}