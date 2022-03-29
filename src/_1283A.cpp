//
// Created by Beast on 29.03.2022.
// https://codeforces.com/problemset/problem/1283/A

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        int h, m;
        cin >> h >> m;
        cout << 1440 - (h * 60 + m) << '\n';
    }
}