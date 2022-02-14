//
// https://codeforces.com/contest/1638/problem/0
//

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int q = 0; q < t; ++q) {
        int n = 0;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        int l = 0, r = 0, min = n + 1, min_length = n + 1;
        for (int i = 0; i < n; ++i) {
            for (int j = i; j < n; ++j) {
                if (i != j && arr[j] - arr[i] < min && abs(i - j) <= min_length){
                    l = i;
                    r = j;
                    min = arr[j] - arr[i];
                    min_length = abs(i - j);
                }
            }
        }
        if (min < 0){
            int temp = arr[l];
            arr[l] = arr[r];
            arr[r] = temp;
        }
        for (int i = 0; i < n; ++i) {
            cout << arr[i] << ' ';
        }
        cout << '\n';
    }
}