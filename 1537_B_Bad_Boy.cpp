#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,i,j;
        cin>>n>>m>>i>>j;
        int x1,y1,x2,y2;
        if(abs(m-j)>=abs(j-1)){
            x1=m;
            x2=1;
        }
        else{
            x1=1;
            x2=m;
        }
        if(abs(n-i)>=abs(i-1)){
            y1=n;
            y2=1;
        }
        else{
            y1=1;
            y2=n;
        }
        cout<<y1<<" "<<x1<<" "<<y2<<" "<<x2<<endl;
    }
    return 0;
}