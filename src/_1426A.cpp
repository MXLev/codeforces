//
// Created by Beast on 06.06.2022.
// https://codeforc1es.com/problemset/problem/1358/A

#include <iostream>
#include <algorithm>
#include <cmath>


using namespace std;

int main() {
    int t;
    cin >> t;
    for (int q = 0; q < t; ++q) {
        double n, x;
        cin >> n >> x;
        if (n <= 2){
            cout << 1 << '\n';
            continue;
        }
        cout << floor((n / x) + 0.5) + 1 << '\n';
    }
}
