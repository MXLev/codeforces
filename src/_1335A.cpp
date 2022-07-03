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
        long long n;
        cin >> n;
        int b = n << 1;
        if (n - b > b){
            if (n - (b + 1) > (b + 1)){
                cout << (n << 1) + 1 << '\n';
            } else {
                cout << (n << 1) << '\n';
            }
        } else {
            cout << (n >> 1) - 1 << '\n';
        }
    }
}