//
// Created by Beast on 07.06.2022.
// https://codeforces.com/contest/1690/problem/0

#include <iostream>
#include <algorithm>
#include <cmath>


using namespace std;

int main() {
    int t;
    cin >> t;
    for (int q = 0; q < t; ++q) {
        int n;
        cin >> n;
        if (n % 3 == 0){
            cout << n / 3 << ' ' << n / 3 + 1 << ' ' << n / 3 - 1 << '\n';
        } else if (n % 3 == 1){
            cout << n / 3 << ' ' << n / 3 + 2 << ' ' << n / 3 - 1 << '\n';
        } else if (n % 3 == 2){
            cout << n / 3 + 1  << ' ' << n / 3 + 2 << ' ' << n / 3 - 1 << '\n';
        }
    }
}