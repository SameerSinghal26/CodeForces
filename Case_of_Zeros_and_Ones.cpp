#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int one=0, zero=0;
    for(int i=0; i<s.size(); i++){
        if(s[i] == '0'){
            zero++;
        }
        else{
            one++;
        }
    }
    int mini = min(one, zero);
    cout << n-(2*mini) << endl;
    return 0;
}