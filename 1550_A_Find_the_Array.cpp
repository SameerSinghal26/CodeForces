#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int s;
        cin >> s;
        int i = 1, count = 0;
        while (s > 0){
            s -= i;
            i += 2;
            count++;
        }
        cout << count << endl;
    }
    return 0;
}