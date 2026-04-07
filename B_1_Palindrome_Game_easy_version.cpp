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
        int n;
        cin>>n;
        string s;
        cin>>s;
        int cnt=0;
        for(char c:s){
            if(c=='0')cnt++;
        }
        if(cnt==1)cout<<"BOB"<<endl;
        else if(cnt%2==1)cout<<"ALICE"<<endl;
        else cout<<"BOB"<<endl;
    }
    return 0;
}