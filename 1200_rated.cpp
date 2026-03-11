// ================================================
// ॐ Namah Parvati Pataye Har Har Mahadev
// Inspiration : न द्वेष्टि न काङ्क्षति - स शिवः।
// ================================================
// Author      : Ranvijay Tiwari
// Language    : C++
// Focus       : DSA & Competitive Programming
// Status      : Always Learning | Always Improving
//har har mahadev
#include<bits/stdc++.h>
using namespace std;
long long gcd(long long a, long long b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

long long lcm(long long a, long long b) {
    return (a / gcd(a, b)) * b;
}

long long sum_range(long long l, long long r) {
    if (l > r) return 0;
    return (l + r) * (r - l + 1) / 2;
}

void solve() {
    long long n, x, y;
    cin >> n >> x >> y;

    long long count_x = n / x;
    long long count_y = n / y;
    long long count_common = n / lcm(x, y);

    long long plus_count = count_x - count_common;
    long long minus_count = count_y - count_common;

    long long positive_sum = sum_range(n - plus_count + 1, n);
    long long negative_sum = sum_range(1, minus_count);

    cout << positive_sum - negative_sum << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
