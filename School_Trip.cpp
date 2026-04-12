#include <bits/stdc++.h>
using namespace std;
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n,x,k;
        cin >>n>>x>>k;
        int first= (x/k)*k;
        int second = first + k;
        int low = x- first;
        int high = second -x;
        if (second <= n) {
            cout << min(low, high) << endl;
        } else {
            cout << low << endl;
        }
    }
}