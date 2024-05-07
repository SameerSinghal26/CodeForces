#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n,k;
        cin >> n >> k;
        int A[n],B[n];
        vector<pair<int,int>> a,b;
        int ans[n];
        for (int i = 0; i < n; i++){
            cin >> A[i];
        }
        for (int i = 0; i < n; i++){
            cin >> B[i];
        }        
        for (int i = 0; i < n; i++){
            a.push_back({A[i], i});
        }
        for (int i = 0; i < n; i++){
            b.push_back({B[i], i});
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        for (int i = 0; i < n; i++){
            ans[a[i].second] = b[i].first;
        }
        for (int i = 0; i < n; i++){
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}