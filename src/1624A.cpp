//
// https://codeforces.com/contest/1624/problem/0
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int j = 0; j < n; ++j) {
            cin >> arr[j];
        }
        if (n == 1){
            cout << 0 << '\n';
            continue;
        }
        sort(arr.begin(), arr.end());
        cout << arr[arr.size() - 1] - arr[0] << '\n';
    }
}