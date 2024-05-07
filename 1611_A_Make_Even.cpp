#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; 
    cin>>t;
    while(t--){
        int num;
        cin>>num;
        int first = 0, temp = num, temp2 = num;
        while(temp2 > 0){
            first = temp2 % 10;
            temp2 /= 10;
        }
        bool check = false;
        int second = 0;
        temp /= 10;
        while(temp > 10){
            if(temp % 2 == 0){
                check=true;
            }
            second = temp % 10;
            temp /= 10;
        }

        if(num % 2 == 0){
            cout<<0<<endl;
        }
        else if(first % 2 == 0){
            cout<<1<<endl;
        }
        else if(check){
            cout<<2<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }

    return 0;
}