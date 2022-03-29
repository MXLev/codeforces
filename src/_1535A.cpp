//
// Created by Beast on 29.03.2022.
// https://codeforces.com/problemset/problem/1535/A

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int q = 0; q < t; ++q) {
        vector<int> s(4);
        for (int i = 0; i < 4; ++i) {
            cin >> s[i];
        }
        int max1 = 0, max2 = 0;
        for (int i = 0; i < 4; ++i) {
            if (s[i] > max1){
                max1 = s[i];
            }
        }
        for (int i = 0; i < 4; ++i) {
            if (s[i] > max2 && max1 != s[i]){
                max2 = s[i];
            }
        }
        if (max(s[0], s[1]) < max1 && max(s[0], s[1]) < max2){
            cout << "NO" << '\n';
            continue;
        }
        if (max(s[2], s[3]) < max1 && max(s[2], s[3]) < max2){
            cout << "NO" << '\n';
            continue;
        }
        cout << "YES" << '\n';
    }
}