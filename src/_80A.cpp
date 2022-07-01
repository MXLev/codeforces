//
// Created by Beast on 08.06.2022.
// https://codeforces.com/problemset/problem/80/A

#include <iostream>
#include <algorithm>
#include <cmath>


using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 2; i < m; ++i) {
        if (m % i == 0){
            cout << "NO" << '\n';
            return 0;
        }
    }
    for (int i = n + 1; i < m; i++) {
        bool broke = false;
        for (int j = 2; j < i; ++j) {
            if (i % j == 0){
                broke = true;
                break;
            }
        }
        if (!broke && i < m){
            cout << "NO" << '\n';
            return 0;
        }
    }
    cout <<  "YES" <<  '\n';
}