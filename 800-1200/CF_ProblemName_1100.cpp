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

int main(){
    long long t;
    cin >> t;
    const long long m = 1000000007;
    while(t--){
        long long n;
        cin >> n;
        long long a = n % m;
        long long b = (n + 1) % m;
        long long c = (4*n % m - 1 + m) % m;
        long long ans = a;
        ans = (ans * b) % m;
        ans = (ans * c) % m;
        ans = (ans * 166666668) % m;
        ans = (ans * 2022) % m;
        cout << ans << "\n";
    }
    return 0;
}
