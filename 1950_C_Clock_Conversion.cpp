#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int h, m;
        char c;
        cin >> h >> c >> m;
        if(h == 0){
            cout << "12:" << setw(2) << setfill('0') << m << " AM" << endl;
        }
        else if(h == 12 && m == 0){
            cout << "12:00 PM" << endl;
        }
        else if(h == 12 && m > 0){
            cout << "12:" << setw(2) << setfill('0') << m << " PM" << endl; 
        }
        else{
            if(h > 12){
                cout << setw(2) << setfill('0') << h-12 << ":" << setw(2) << setfill('0') << m << " PM" << endl; 
            }
            else{
                cout << setw(2) << setfill('0') << h << ":" << setw(2) << setfill('0') << m << " AM" << endl;
            }
        }
    }
    return 0;
}
