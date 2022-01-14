//
// https://codeforces.com/problemset/problem/705/A
//

#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    if (n == 1){
        cout << "I hate it";
        return 0;
    }
    for (int i = 1; i <= n; ++i) {
        if (i < n  && i % 2 == 0){
            cout << "I love that ";
        } else if (i < n && i % 2 != 0) {
            cout << "I hate that ";
        } else if (i % 2 == 0) {
            cout << "I love it ";
        } else {
            cout << "I hate it ";
        }
    }
}