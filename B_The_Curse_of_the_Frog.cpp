#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll ceil_div(ll p, ll q) {
    if (q == 0) return 0;
    return (p + q - 1) / q;
}

void process() {
    ll n, x;
    cin >> n >> x;

    ll base = 0;
    ll best = LLONG_MIN;

    for (int i = 0; i < n; ++i) {
        ll a, b, c;
        cin >> a >> b >> c;

        base += (b - 1) * a;

        ll gain = (a * b) - c;
        best = max(best, gain);
    }

    if (base >= x) {
        cout << 0 << endl;
        return;
    }

    if (best <= 0) {
        cout << -1 << endl;
        return;
    }

    ll need = x - base;
    ll res = ceil_div(need, best);

    cout << res << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        process();
    }

    return 0;
}
