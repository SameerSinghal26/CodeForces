#include<bits/stdc++.h>
using namespace std;
 
int main(){ 
    int t;
    cin >> t;
    while(t--){
        int x, y;
        cin >>x>>y;
        if(x%2 != 0 && y%2 != 0){
            cout << "No" << endl;
        }
        else if(x%2 == 0 && y%2 == 0){
            if(y/2 != x || x/2 != y){
                cout << "Yes" << endl;
            }
            else{
                cout << "No" << endl;
            }
        }
        else if(x%2 == 0){
            if(x/2 != y){
                cout << "Yes" << endl;
            }
            else{
                cout << "No" << endl;
            }
        }
        else{
            if(y/2 != x){
                cout << "Yes" << endl;
            }
            else{
                cout << "No" << endl;
            }
        }
    }
    return 0;
}