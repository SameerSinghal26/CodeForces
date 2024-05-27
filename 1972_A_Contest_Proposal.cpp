#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        vector<int> vec1(n);
        vector<int> vec2(n);
        for(int i=0;i<n;i++){
            cin>>vec1[i];
        }
        for(int i=0;i<n;i++){
            cin>>vec2[i];
        }
        int count  = 0;
        for(int i = 0; i < n - count; i++){
            for(int j = 0; j < n; j++){
                if(vec2[j] < vec1[i]){
                    count++;
                }
                else{
                    i++;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}