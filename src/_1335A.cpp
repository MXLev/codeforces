//
// Created by Lev Skuratov on 08.05.2022.
// https://codeforces.com/problemset/problem/1335/A

#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int q = 0; q < t; ++q) {
        float n;
        cin >> n;
        cout << n / 2 - 1 << '\n';
    }
}