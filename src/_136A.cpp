//
// https://codeforces.com/problemset/problem/136/A
//

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    vector<int> answ(n);
    for (int i = 0; i < n; ++i) {
        answ[arr[i] - 1] = i + 1;
    }
    for (int i = 0; i < n; ++i) {
        cout << answ[i] << ' ';
    }
}