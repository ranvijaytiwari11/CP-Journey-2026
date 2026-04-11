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

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        long long x, y;
        cin >> n >> x >> y;

        vector<long long> a(n);
        long long total_transferable = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            total_transferable += (a[i] / x) * y;
        }

        long long max_rubles = 0;
        for (int i = 0; i < n; i++) {
            long long current_target_total = a[i] + (total_transferable - (a[i] / x) * y);
            max_rubles = max(max_rubles, current_target_total);
        }

        cout << max_rubles << endl;
    }
    return 0;
}