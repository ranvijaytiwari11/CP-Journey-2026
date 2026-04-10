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
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        vector<bool>find(n + 1, false);

        int current_pos = 1;
        find[current_pos] = true;

        for (int i = 0; i < n; i++) {
            if (s[current_pos - 1] == 'R') {
                current_pos++;
            } else {
                current_pos--;
            }
            find[current_pos] = true;
        }

        int count = 0;
        for (int i = 1; i <= n; i++) {
            if (find[i]) {
                count++;
            }
        }

        cout << count << endl;
    }
    return 0;
}