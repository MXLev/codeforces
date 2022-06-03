//
// https://codeforces.com/problemset/problem/1399/A
// https://codeforces.com/problemset/problem/1399/A

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
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        bool broken = false;
        for (int i = 0; i < n - 1; ++i) {
            if (a[i] + 1 == a[i + 1]){
                broken = false;
            } else if (a[i] == a[i + 1]){
                broken = false;
            } else {
                broken = true;
                break;
            }
        }
        if (!broken){
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';
        }
    }
}