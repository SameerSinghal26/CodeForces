#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string str;
        cin >> str;
        int count = 0;
        for (char ch : str) {
            if (ch == 'U') {
                count++;
            }
        }
        if (count % 2 == 1) {
            cout << "YES" << endl;
        } 
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}