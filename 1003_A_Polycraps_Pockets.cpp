#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin >> n;
    vector<int>vec(n);
    unordered_map<int, int> mpp;
    int res = 0;
    for(int i=0; i<n; i++){
        cin >> vec[i];
        mpp[vec[i]]++;
        res = max(res, mpp[vec[i]]);
    }
    cout << res << endl;
    return 0;
}