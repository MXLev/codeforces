//
// Created by Beast on 26.02.2022.
// https://codeforces.com/problemset/problem/1433/A

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int q = 0; q < t; ++q) {
        int x;
        cin >> x;
        string num = "1";
        int sum = 0;
        for (int i = 0;; ++i) {
            if (stoi(num) > 10000){
                num = to_string(num[0] - 48 + 1);
                continue;
            }
            sum += num.size();
            if (stoi(num) == x){
                break;
            }
            num += num[0];
        }
        cout << sum << "\n";
    }
}