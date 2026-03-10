#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int p1 = 1, p2 = 2;
    int spec = 3;

    for (int i = 0; i < n; i++) {
        int winner = a[i];

        if (winner == spec) {
            cout << "NO\n";
            return 0;
        }

        int loser;
        if (winner == p1) {
            loser = p2;
            p2 = spec;
        } else {
            loser = p1;
            p1 = spec;
        }

        spec = loser;
    }

    cout << "YES\n";
    return 0;
}
