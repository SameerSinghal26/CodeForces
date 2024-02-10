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
        int i=0,j=n-1;
        int count =0;
        while(j>i && j >=0 && i<n){
            if(str[i] != str[j]){
                j--;
                i++;
                count+=2;
            }
            else{
                break;
            }
        }
        cout<<n-count<<endl;
    }

    return 0;
}