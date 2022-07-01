//
// Created by Beast on 31.05.2022.
// https://codeforces.com/problemset/problem/1352/A

#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int q = 0; q < t; ++q) {
        string n;
        cin >> n;
        int n0 = 0;
        for (char i : n) {
            if (i != '0'){
                n0++;
            }
        }
        cout << n0 << '\n';
        for (int i = 0; i < n.size(); ++i) {
            string temp;
            temp += n[i];
            if (n[i] != '0'){
                for (int j = 0; j < (n.size() - i - 1); ++j) {
                    temp += '0';
                }
                cout << temp << ' ';
            }
        }
        cout << '\n';
    }
}