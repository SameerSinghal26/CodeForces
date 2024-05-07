#include<bits/stdc++.h>
using namespace std;

int main(){
    int long long t;
    cin>>t;
    while(t--){
    int long long n;
    cin >> n;
    vector<int long long> arr(n);
    for (int long long i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(), arr.end());
    int long long sum = 0;
    for (int long long i=0;i<n-1;i++){
        sum += arr[i];
    }
    cout << fixed << setprecision(10);
    cout << double((double(sum) / (n - 1)) + arr[n - 1])<<endl;
    }
    return 0;
}