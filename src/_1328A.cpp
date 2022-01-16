//
// https://codeforces.com/problemset/problem/1328/A
//

#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        int a, b;
        cin >> a >> b;
        if (a % b != 0){
            cout << b - a % b << '\n';
        } else {
            cout << 0 << '\n';
        }
    }
}