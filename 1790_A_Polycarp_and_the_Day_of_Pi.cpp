#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;
        string pi = "314159265358979323846264338327";
        int i;
        for(i = 0; i<str.size(); i++){
            if(pi[i] != str[i]){
                break;
            }
        }
        cout << i << endl;

    }
    return 0;
}