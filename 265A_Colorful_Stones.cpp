#include<bits/stdc++.h>
using namespace std;

int main(){
    string str1,str2;
    cin>>str1>>str2;
    int i=0;
    for(int j=0;j<str2.size();j++){
        if(str2[j]==str1[i]){
            i++;
        }
    }
    cout<<++i<<endl;
    return 0;
}