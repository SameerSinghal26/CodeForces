#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> trace(n);
        for (int i =  0; i < n; ++i) {
            cin >> trace[i];
        }
        vector<int> last(26, -1);
        string result;
        for (int i =  0; i < n; ++i) {
            if (last[trace[i]] != -1) {
                result.push_back((result[last[trace[i]]] - 'a' +  1) %  26 + 'a');
            } else {
                result.push_back('a');
            }
            last[trace[i]] = i;
        }

        cout << result << "\n";
    }
    return 0;
}