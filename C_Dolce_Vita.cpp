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
    int t;
    cin >> t;
    while(t--){
        int n;
        int x;
        cin >> n >> x;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        long long total_packs = 0;
        long long current_sum = 0;

        for (int k = 0; k < n; k++) {
            current_sum += a[k];
            
            if (current_sum <= x) {
                total_packs += (x - current_sum) / (k + 1) + 1;
            }
        }

        cout << total_packs << "\n";
    }
    return 0;
}