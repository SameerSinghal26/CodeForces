#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int count = 0;
        for (int i = 0; i < 8; i++) {
            string arr; 
            cin >> arr;
            if (arr == "RRRRRRRR"){
                count++;
            }
        }
        if (count >= 1){
            cout << "R" << endl;
        }
        else{
            cout << "B" << endl;
        }
    }
    return 0;
}