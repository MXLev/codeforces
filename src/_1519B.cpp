//
// Created by Beast on 15.07.2022.
// https://codeforces.com/problemset/problem/1519/B

#include <iostream>
#include <algorithm>
#include <cmath>


using namespace std;

int main() {
    int t;
    cin >> t;
    for (int q = 0; q < t; ++q) {
        int n, m, k;
        cin >> n >> m >> k;
        int answ = n * m - 1;
        if (answ == k){
            cout << "YES" << '\n';
        } else {
            cout << "NO" <<'\n';
        }
    }
}