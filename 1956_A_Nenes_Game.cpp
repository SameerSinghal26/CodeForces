#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    
    while(t--){
        int k, q;
        cin >> k >> q;
        vector<int> vec1(k);
        for (int i = 0; i < k; i++) {
            cin >> vec1[i];
        }
        vector<int> vec2(q);
        for (int i = 0; i < q; i++) {
            cin >> vec2[i];
        }
        for (int i : vec2) {
            if (i < vec1[0]) {
                cout << i << " ";
            }
            else {
                cout << vec1[0] - 1 << " ";
            }
        }
        cout << endl;
    }
    return 0;
}