// ================================================
// ॐ Namah Parvati Pataye Har Har Mahadev
// Inspiration : न द्वेष्टि न काङ्क्षति - स शिवः।
// ================================================
// Author      : Ranvijay Tiwari
// Language    : C++
// Focus       : DSA & Competitive Programming
// Status      : Always Learning | Always Improving

#include<bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;

        vector<long long> B(N);
        long long maximumValue = 0;

        for (int index = 0; index < N; index++) {
            cin >> B[index];
            if (B[index] > maximumValue) {
                maximumValue = B[index];
            }
        }

        map<long long, int> requiredResets;
        bool isValid = true;

        for (int index = 0; index < N; index++) {
            long long difference = maximumValue - B[index];

            if (difference > 0) {
                requiredResets[difference]++;

                if (requiredResets[difference] > 1) {
                    isValid = false;
                    break;
                }
            }
        }

        if (isValid) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}