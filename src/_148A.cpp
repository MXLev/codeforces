//
// https://codeforces.com/problemset/problem/148/A
//

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;
    if (k == 1 || l == 1 || m == 1 || n == 1){
        cout << d;
        return 0;
    }
    vector<int> arr(d, 1);
    for (int i = 0; i < d; ++i) {
        if ((i + 1) % k == 0){
            arr[i] = 0;
            continue;
        }
        if ((i + 1) % l == 0){
            arr[i] = 0;
            continue;
        }
        if ((i + 1) % m == 0){
            arr[i] = 0;
            continue;
        }
        if ((i + 1) % n == 0){
            arr[i] = 0;
            continue;
        }
    }
    int answ = 0;
    for (int i = 0; i < d; ++i) {
        if (arr[i] == 0){
            ++answ;
        }
    }
    cout << answ;
}