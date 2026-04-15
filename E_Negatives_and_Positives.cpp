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
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vi a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        int sum=0,neg_ele=0,mn=INT_MAX;
        for (int i = 0; i < n; i++) {
            if (a[i] < 0) neg_ele++;
            sum += abs(a[i]);
            mn = min(mn, abs(a[i]));
        }
        if(neg_ele%2==0)cout<<sum<<endl;
        else cout<<sum-(2*mn)<<endl;
    }
    return 0;
}