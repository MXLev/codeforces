//
// https://codeforces.com/contest/1624/problem/B
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        vector<int> arr(3);
        cin >> arr[0] >> arr[1] >> arr[2];
        sort(arr.begin(), arr.end());
        int diff = arr[2] - arr[1];
        if (arr[1] - diff == arr[0]) {
            cout << "YES" << '\n';
            continue;
        }
        if (diff > arr[0]) {
            if (arr[0] == 1) {
                if (arr[0] + diff == arr[2]) {
                    cout << "YES" << '\n';
                } else {
                    cout << "NO" << '\n';
                }
                continue;
            }
            if (diff % arr[0] == 0) {
                cout << "YES" << '\n';
                continue;
            }
            cout << "NO" << '\n';
            continue;
        } else if (diff == arr[0]) {
            cout << "NO" << '\n';
            continue;
        } else if (arr[1] % arr[0] == 0) {
            cout << "YES" << '\n';
            continue;
        }
        cout << "NO" << '\n';
    }
}