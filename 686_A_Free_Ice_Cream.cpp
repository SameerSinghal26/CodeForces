#include<bits/stdc++.h>
using namespace std;

int main(){
	int ans=0;
	long long int n,x;
	cin>>n>>x;
	for(int i=0;i<n;i++){
		char sign;
		int d;
		cin>>sign>>d;
		if(sign=='-'){
			if(d>x){
				ans+=1;
			}
			else{
				x-=d;

			}
		}
		else{
			x+=d;
		}
	}
	cout<<x<<" "<<ans;
    return 0;
}