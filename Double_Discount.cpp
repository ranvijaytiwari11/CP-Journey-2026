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
    cin>>t;
    while(t--){
        int N, K, ans = 0;
        cin >> N >> K;
        vector<int> A(N), B(N);
        for (int &x : A) cin >> x;
        for (int &x : B) cin >> x;

        for (int i = 0; i < N; ++i) {
            for (int j = i + 1; j < N; ++j) {
                int hi = max(A[i], A[j]), lo = min(A[i], A[j]);
                if (lo + hi - min(hi / 2, 100) <= K) ans = max(ans, B[i] + B[j]);
            }
        }
        cout << ans << endl;
    }
    return 0;
}