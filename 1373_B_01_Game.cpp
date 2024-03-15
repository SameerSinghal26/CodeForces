#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        string str;
        cin >> str;
        int count1 = 0, count2 = 0;
        for (int i = 0; i < str.size(); i++){
            if (str[i] == '0'){
                count1++;
            }
            if (str[i] == '1'){
                count2++;
            }
        }
        int res = min(count1, count2);
        if (res % 2 == 0){
            cout << "NET" << endl;
        }
        else{
            cout << "DA" << endl;
        }
    }
    return 0;
}