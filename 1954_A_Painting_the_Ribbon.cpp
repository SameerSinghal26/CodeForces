#include<bits/stdc++.h>
using namespace std;

int main(){
    int str;
    cin >> str;
    for (int i = 0; i < str; i++) {
        vector<int> arr(3);
        for (int j = 0; j < 3; j++) {
            cin >> arr[j];
        }
        double ans = (arr[0] + arr[1] - 1.0) / arr[1];
        if (arr[2] < arr[0] - floor(ans)) {
            cout << "YES" << endl;
        } 
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}