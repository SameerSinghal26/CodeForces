#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        string str, check;
        cin >> str >> check;
        int i = check.size();
        string res = "";
        map<char, int> mpp;
        for(int j=str.size()-1; j>=0; j--){
            if(str[j] == check[i-1] && mpp[str[j]] < 1){
                res += str[j];
                i--;
            }
            else mpp[str[j]]++;
        }
        reverse(res.begin(), res.end());
        if(res == check){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}