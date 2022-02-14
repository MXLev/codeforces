//
// https://codeforces.com/contest/1638/problem/B
//

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int q = 0; q < t; ++q) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        bool flag = false;
        for (int i = 0; i < n - 1; ++i) {
            for (int j = i; j < n - 1; ++j) {
                if (arr[j] > arr[j + 1]) {
                    if ((arr[j] + arr[j + 1]) % 2 != 0) {
                        swap(arr[j], arr[j + 1]);
                    } else {
                        flag = true;
                        cout << "NO" << "\n";
                        break;
                    }
                }
            }
            if (flag){
                break;
            }
        }
        if (flag){
            continue;
        }
        cout << "YES" << '\n';
    }
}