#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        string str1, str2;
        cin >> str1 >> str2;
        string check1 = str1;
        int count = 0;
        if(str1.find(str2) != -1){
            cout << 0 << endl;
            continue;
        }
        int x = 0;
        do{
            string check2 = check1;
            check2.append(check1);
            check1 = check2;
            count++;
            if(check1.find(str2) != -1){
                cout << count << endl;
                x = 1;
                break;
            }
        }while(check1.size() <= str2.size()*2);
        
        if(x != 1){
            cout << -1 << endl;
        }
    }
    return 0;
}