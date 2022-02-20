//
// Created by Beast on 20.02.2022.
// https://codeforces.com/problemset/problem/1360/A

#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        int a, b;
        cin >> a >> b;
        if (a * 2 < b) {
            cout << b * b << '\n';
        } else if (b * 2 < a) {
            cout << a * a << '\n';
        } else {
            cout << min((a * 2) * (a * 2), (b * 2) * (b * 2)) << '\n';
        }
    }
}