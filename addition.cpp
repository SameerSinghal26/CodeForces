#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,e,f;
    cout<<"Enter the value for first digit : ";
    cin>>a;
    cout<<"Enter the value for second digit : ";
    cin>>b;
    cout<<"Enter the value for third digit : ";
    cin>>c;
    cout<<"Enter the value for fourth digit : ";
    cin>>d;
    e=(a*1000)+(b*100)+(c*10)+d;
    cout<<"\nOriginal number without adding : "<<e;
    cout<<"\n";
    if(a==10)
    {
        a=0;
    }
    else if(a==9){
        a=1;
    }
    else
    {
        a+=2;
    }
    if(b==9)
    {
        b=1;
    }
    else
    {
        b+=2;
    }
    if(c==9)
    {
        c=1;
    }
    else
    {
        c+=2;
    }
    if(d==9)
    {
        d=1;
    }
    else
    {
        d+=2;
    }
    f=(a*1000)+(b*100)+(c*10)+d;
    cout<<"\nNumber after adding 2222 : "<<f;
}