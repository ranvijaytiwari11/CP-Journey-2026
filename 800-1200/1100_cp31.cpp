// ================================================
// ॐ Namah Parvati Pataye Har Har Mahadev
// Inspiration : न द्वेष्टि न काङ्क्षति - स शिवः।
// ================================================
// Author      : Ranvijay Tiwari
// Language    : C++
// Focus       : DSA & Competitive Programming
// Status      : Always Learning | Always Improving

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    ll n, l, r;
    cin >> n >> l >> r;

    vector<ll> ans;

    for (ll i = 1; i <= n; i++) {
        ll temp = ((l + i - 1) / i) * i;

        if (temp > r) {
            cout << "NO\n";
            return;
        }

        ans.push_back(temp);
    }

    cout << "YES\n";
    for (ll x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
