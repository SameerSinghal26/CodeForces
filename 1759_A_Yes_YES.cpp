#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;
        bool check = true;
        if(str[0] != 'Y' && str[0] != 'e' && str[0] != 's') check = false;
        for(int i=0; i<str.size()-1; i++){
            if(str[i] == 'Y'){
                if(str[i+1] != 'e'){
                    check = false;
                    break;
                }
            }
            else if(str[i] == 'e'){
                if(str[i+1] != 's'){
                    check = false;
                    break;
                }
            }
            else if(str[i] == 's'){
                if(str[i+1] != 'Y'){
                    check = false;
                    break;
                }
            }
            else{
                check = false;
                break;
            }
        }
        if(check){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
 
    return 0;
}