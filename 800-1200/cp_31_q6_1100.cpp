// ================================================
// Inspiration : न द्वेष्टि न काङ्क्षति - स शिवः।
// ================================================
// Author      : Ranvijay Tiwari
// Language    : C++
// Focus       : DSA & Competitive Programming
// Status      : Always Learning | Always Improving

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, q;
    cin >> n >> q;

    vector<long long> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];

    vector<int> used(31, 0);

    while(q--) {
        int x;
        cin >> x;

        if(used[x]) continue;
        used[x] = 1;

        long long power = 1LL << x;
        long long add = 1LL << (x - 1);

        for(int i = 0; i < n; i++) {
            if(a[i] % power == 0) {
                a[i] += add;
            }
        }
    }

    for(int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
