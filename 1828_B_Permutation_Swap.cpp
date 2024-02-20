#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
   	cin>>t;
   	while(t--){
   	 	int n;
   	 	cin>>n;
   	 	vector<int> arr(n);
   	 	vector<int> res;
   	 	for(int i=0;i < n;i++){
   	 		cin >> arr[i];
   	 		if(arr[i] != (i+1)){
   	 			res.push_back(abs(arr[i] - (i+1))) ;
   	 		}
   	 	}
   	 	int ans = res[0];
   	 	for(int i=1;i<res.size();i++){
   	 		ans = __gcd(ans,res[i]);
   	 	}
   	 	cout << ans << endl;
   	}
    return 0;
}