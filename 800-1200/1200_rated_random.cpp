// ================================================
// ॐ Namah Parvati Pataye Har Har Mahadev
// Inspiration : न द्वेष्टि न काङ्क्षति - स शिवः।
// ================================================
// Author      : Ranvijay Tiwari
// Language    : C++
// Focus       : DSA & Competitive Programming
// Status      : Always Learning | Always Improving

#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<vector<int>> groups(n + 1);
    for (int i = 0; i < n; i++) {
        int b_val;
        cin >> b_val;
        groups[b_val].push_back(i);
    }

    vector<int> a(n);
    int current_id = 1;

    for (int val = 1; val <= n; val++) {
        if (groups[val].empty()) continue;

        if (groups[val].size() % val != 0) {
            cout << -1 << endl;
            return;
        }

        for (int i = 0; i < groups[val].size(); i++) {
            a[groups[val][i]] = current_id;
            if ((i + 1) % val == 0) {
                current_id++;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << a[i] << (i == n - 1 ? "" : " ");
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
