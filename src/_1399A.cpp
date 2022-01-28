//
// https://codeforces.com/problemset/problem/1399/A
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int q = 0; q < t; ++q) {
        int n;
        cin >> n;
        if (n == 1){
            cout << "YES" << '\n';
            continue;
        }
        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        bool breaked = true;
        for (int i = 0; i < n - 1; ++i) {
            if (arr[i] + 1 == arr[i + 1]){
                breaked = false;
            } else if (arr[i] == arr[i + 1]){
                breaked = false;
            } else {
                breaked = true;
                break;
            }
        }
        if (!breaked){
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';
        }
    }
}