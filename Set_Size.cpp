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

int32_t main(){
    int n, q;
    cin >> n >> q;
    vi a(n);
    for (int i = 0; i < n; ++i)cin>>a[i];
    sort(all(a));
    a.erase(unique(all(a)), a.end());
    int sze = a.size();
    vector<int> gapar;
    for (int i = 0;i<sze-1;i++) {
        gapar.push_back(a[i + 1] - a[i]);
    }
    sort(all(gapar));
    int gsize = gapar.size();
    vector<int>prefs(gsize+1,0);
    for (int i=0;i<gsize;++i) {
        prefs[i + 1]=prefs[i]+gapar[i];
    }
    while (q--) {
        int x;
        cin>>x;
        int spanv = (a[sze-1]+x)-(a[0]+1)+1;
        auto it = upper_bound(all(gapar), x);
        int cntle = it - gapar.begin();
        int sumgr =prefs[gsize]-prefs[cntle];
        int cntgr = gsize - cntle;
        int empty=sumgr-(int)cntgr*x;
        cout<<spanv-empty<<endl;
    }
    return 0;
}