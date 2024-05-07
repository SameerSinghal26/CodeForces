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
        int odd = 0;
        for(int i=0; i<n; i++){
            if((str[i]-'0')%2 != 0){
                odd++;
            }
        }
        for(int i=n-1; i>=0; i--){
            if(str[i] == '0' || (str[i]-'0') % 2 == 0){
                str.erase(i, 1);
            }
            else{
                break;
            }
        }
        if(odd%2 == 1){
            for(int i=0; i<str.size(); i++){
                if((str[i]-'0')%2 != 0){
                    str.erase(i, 1);
                    odd--;
                    break;
                }
            }
            if(odd == 0){
                cout <<  -1 << endl;
                continue;
            }
        }
        else if(str.size() == 0){
            cout << -1 << endl;
            continue;
        }
        bool check = false;
        for(int i=0; i<str.size(); i++){
            if(str[i] != '0'){
                check = true;
            }
            if(check){
                cout << str[i];
            }
        }
        if(check == false){
            cout << -1;
        }
        cout << endl;  
    }
    return 0;
}