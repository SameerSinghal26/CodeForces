#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1, s2, s3, ans;
    cin >> s1 >> s2 >> s3;
    ans = s1+s2;
    sort(ans.begin(), ans.end());
    sort(s3.begin(), s3.end());
    if(ans == s3){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}