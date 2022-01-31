//
// https://codeforces.com/contest/1633/problem/0
//

#include <iostream>

using namespace std;

int main() {
    int t = 0;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        string n;
        cin >> n;
        for (int j = 0; stoi(n) % 7 != 0; ++j) {
            n[n.size() - 1] = j + 48;
        }
        cout << n << '\n';
    }
}