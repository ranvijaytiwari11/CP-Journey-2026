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
#define ss seconda
#define all(x) (x).begin(), (x).end()

using vi = vector<int>;
using vvi = vector<vector<int>>;

using pii = pair<int, int>;
using mp = map<int, int>;
using st = unordered_set<int>;
using seti = set<int>;

using maxpq = priority_queue<int>;
using minpq = priority_queue<int, vector<int>, greater<int>>;

int32_t main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        bool ok = false;
        for(int k = 2; k * k <= n; k++){
            int sum = 1 + k + k * k;
            int curr = k * k;
            while(sum <= n){
                if(sum == n){
                    ok = true;
                    break;
                }
                curr *= k;
                sum += curr;
            }
            if(ok) break;
        }
        if(ok) cout << "YES"<<endl;
        else cout << "NO"<<endl;;
    }
    return 0;
}