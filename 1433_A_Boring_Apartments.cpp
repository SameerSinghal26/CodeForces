#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        string n;
        int count = 0;
        cin >>n;
        count += (stoi(n) % 10 - 1) * 10;
        if (n.size() == 1){
            count += 1;
            cout << count << endl;
            continue;
        }
        else if (n.size() == 2){
            count += 3;
            cout << count << endl;
            continue;
        }
        else if (n.size() == 3){
            count += 6;
            cout << count << endl;
            continue;
        }
        else if (n.size() == 4){
            count += 10;
            cout << count << endl;
            continue;
        }
    }
    return 0;
}