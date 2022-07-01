//
// Created by Lev Skuratov on 17.06.2022.
// https://codeforces.com/problemset/problem/1371/A

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        long long n;
        cin >> n;
        if (n % 2 == 0){
            cout << n / 2 << '\n';
        } else {
            cout << n / 2 + 1 << '\n';
        }

    }
}