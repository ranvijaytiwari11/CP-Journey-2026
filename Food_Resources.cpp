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

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " = " << x << endl;
#else
#define debug(x)
#endif

#define int long long
const int M = 1e9 + 7;

#define pb push_back
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()

using vi = vector<int>;
using vvi = vector<vector<int>>;

using pii = pair<int, int>;
using mp = map<int, int>;
using st = unordered_set<int>;
using seti = set<int>;

using maxpq = priority_queue<int>;
using minpq = priority_queue<int, vector<int>, greater<int>>;
   
bool isPossible(const vector<int>& resources, int requiredPeople, int duration) {
    if (duration == 0) return true;
    long long supportedPeople = 0;
    for (int value : resources) {
        supportedPeople += (value / duration);
        if (supportedPeople >= requiredPeople) return true;
    }
    return false;
}
int32_t main(){ 
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    int maxValue = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        maxValue = max(maxValue, a[i]);
    }
    int left = 0, right = maxValue;
    int result = 0;
    while (left <= right) {
        int midDays = left + (right - left) / 2;
        if (midDays == 0) {
            left = midDays + 1;
            continue;
        }
        if (isPossible(a, m, midDays)) {
            result = midDays;
            left = midDays + 1;
        } else {
            right = midDays - 1;
        }
    }
    cout << result << endl;
    return 0;
}