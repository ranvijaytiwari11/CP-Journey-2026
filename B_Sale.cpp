#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    int sum = 0;
    int count = 0;

    for(int i = 0; i < n && count < m; i++){
        if(a[i] < 0){
            sum += a[i];
            count++;
        } else {
            break;
        }
    }

    cout << abs(sum) << endl;
}
