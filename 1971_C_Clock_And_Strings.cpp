#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        vector<int> vec;
        for (int i = 1; i <= 12; i++){
            vec.push_back(i);
        }
        int maxi = max(a, b);
        int mini = min(a, b);
        bool flag = false;
        if ((mini < c && maxi > c) && (mini > d || maxi < d)){
            flag = true;
        }
        else if ((mini < d && maxi > d) && (mini > c || maxi < c)){
            flag = true;
        }
        if (flag){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}