// ================================================
// ॐ Namah Parvati Pataye Har Har Mahadev
// Inspiration : न द्वेष्टि न काङ्क्षति - स शिवः。
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
        string s;
        cin >> s;
        int n = (int)s.size();

        set<char> st;
        int k;

        for(k = 0; k < n; k++){
            if(st.find(s[k]) == st.end()){
                st.insert(s[k]);
            }
            else{
                break;
            }
        }

        bool ok = true;

        for(int i = k; i < n; i++){
            if(s[i] != s[i - k]){
                ok = false;
                break;
            }
        }

        if(ok) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
