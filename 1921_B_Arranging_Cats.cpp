#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
	string s,f;
	cin>>n;
    cin>>s;
    cin>>f;
	int ex1 = 0, ex2 = 0;
	for (int i=0;i<n;i++) {
		if (s[i] != f[i]) {
            if(s[i] == '1'){
                ex1++;
            }
			else if(f[i] == '1'){
                ex2++;
            }
		}
	}
	cout<<max(ex2, ex1)<<endl;
    }
    return 0;
}