#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int x = 0;
        int count = 0;
        for(int i = 0;i<n;i++){
            if(s[i] == 'B'){
                count++;
            } 
            else{
                if(count > 0){
                    x += (count + k - 1)/k;
                    count = 0;
                }
            }
        }
        if(count > 0){
            x +=(count + k - 1)/k;
        }

        cout << x << endl;
    }
    return 0;
}