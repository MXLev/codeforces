//
// Created by Beast on 20.03.2022.
// https://codeforces.com/problemset/problem/1294/A

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int q = 0; q < t; ++q) {
        vector<int> sisters(3);
        int n;
        cin >> sisters[0] >> sisters[1] >> sisters[2] >> n;
        sort(sisters.rbegin(), sisters.rend());
        n -= sisters[0] - sisters[1];
        n -= sisters[0] - sisters[2];
        sisters[1] = sisters[2] = sisters[0];
        if (sisters[0] == sisters[1] && sisters[0] == sisters[2] && n == 0) {
            cout << "YES" << '\n';
            continue;
        }
        if (n <= 0){
            cout << "NO" << '\n';
            continue;
        }
        if (sisters[0] == sisters[1] && sisters[0] == sisters[2] && n % 3 == 0){
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';
        }
    }
}