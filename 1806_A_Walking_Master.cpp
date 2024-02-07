#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(d<b){
            cout<< -1 <<endl;
        }
        else if(a==c && b==d){
            cout<< 0 <<endl;
        }
        else{
            int count=0;
            while(b<d){
                a++;
                b++;
                count++;
            }
            if(a<c){
                cout<< -1 <<endl;
            }
            else{
                while(a>c){
                    count++;
                    a--;
                }
                cout<<count<<endl;
            }
        }
    }
    return 0;
}