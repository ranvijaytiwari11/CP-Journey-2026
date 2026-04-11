#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int idx = 0; idx < n; idx++) {
            cin >> arr[idx];
        }

        int mismatchIndex = -1;
        for (int idx = 0; idx < n; idx++) {
            if (arr[idx] != n - idx) {
                mismatchIndex = idx;
                break;
            }
        }

        if (mismatchIndex == -1) {
            for (int idx = 0; idx < n; idx++) {
                cout << arr[idx] << (idx == n - 1 ? "" : " ");
            }
            cout << endl;
            continue;
        }

        int requiredValue = n - mismatchIndex;
        int rightIndex = 0;

        for (int idx = 0; idx < n; idx++) {
            if (arr[idx] == requiredValue) {
                rightIndex = idx;
                break;
            }
        }

        vector<int> bestArray = arr;

        for (int leftIndex = 0; leftIndex <= mismatchIndex; leftIndex++) {
            vector<int> tempArray = arr;
            reverse(tempArray.begin() + leftIndex, tempArray.begin() + rightIndex + 1);

            if (tempArray > bestArray) {
                bestArray = tempArray;
            }
        }

        for (int idx = 0; idx < n; idx++) {
            cout << bestArray[idx] << (idx == n - 1 ? "" : " ");
        }
        cout << endl;
    }

    return 0;
}
