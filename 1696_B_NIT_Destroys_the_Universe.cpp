#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    int res = 0;
    while(t--) {
        int n;
        cin >> n;
        int x;
        cin >> x;
        int count=0;
        if(x != 0){
            count++;
        }
        int val=0;
        for(int i=1; i < n; i++) {
            cin >> val;
            if(val != 0) {
                if(x == 0) count++;
            }
            x = val;
        }
        cout << min(2, count) << endl;
    }
    return 0;
}