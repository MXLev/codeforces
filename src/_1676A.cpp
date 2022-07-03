//
// Created by Lev Skuratov on 01.07.2022.
// https://codeforces.com/problemset/problem/1676/A

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int q = 0; q < t; ++q) {
        string ticket;
        cin >> ticket;
        int sum1 = 0, sum2 = 0;
        for (int i = 0; i < 3; ++i) {
            sum1 += ticket[i] - 48;
        }
        for (int i = 3; i < 6; ++i) {
            sum2 += ticket[i] - 48;
        }
        if (sum1 == sum2){
            cout << "Yes" << '\n';
        } else {
            cout << "No" << '\n';
        }
    }
}
