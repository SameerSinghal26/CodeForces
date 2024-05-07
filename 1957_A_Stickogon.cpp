#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        unordered_map<int, int> mpp;
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
            mpp[arr[i]]++;
        }
        int sum = 0;
        for(auto it : mpp){
            sum += it.second/3;
        }
        cout << sum << endl;
    }
 
    return 0;
}