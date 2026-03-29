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
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n + 1);

        for(int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        int ans = 0;
        for(int i = 1; i <= n; i++) {
            for(int k = a[i]; k <= 2 * n; k += a[i]) {
                int j = k - i;
                if(j > i && j <= n) {
                    if(a[i] * a[j] == i + j) {
                        ans++;
                    }
                }
            }
        }
        cout << ans << endl;
    }
}