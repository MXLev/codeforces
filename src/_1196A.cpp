//
// Created by Beast on 19.07.2022.
// https://codeforces.com/problemset/problem/1196/A

#include <iostream>
#include <algorithm>
#include <cmath>


using namespace std;

int main() {
    long long t;
    cin >> t;
    for (int q = 0; q < t; ++q) {
        long long a, b, c;
        cin >> a >> b >> c;
        cout << (a + b + c) / 2 << '\n';
    }
}