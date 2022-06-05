//
// Created by Beast on 05.06.2022.
// https://codeforces.com/problemset/problem/1385/A

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int q = 0; q < t; ++q) {
        int x, y, z;
        cin >> x >> y >> z;
        int a = 0, b = 0, c = 0;
        if (x == y){
            a = x;
        } else {
            b = x;
            c = y;
        }
        if (x == z){
            b = x;
        } else {
            a = x;
            c = z;
        }
        if (y == z){
            c = y;
        } else {
            a = y;
            b = z;
        }
        if (a == 0 || b == 0 || c == 0){
            cout << "NO" << '\n';
        } else if (a >= b && a != x){
            cout << "NO" << '\n';
        } else if (a >= c && a != y){
            cout << "NO" << '\n';
        } else if (b >= c && b != z){
            cout << "NO" << '\n';
        } else if (c >= b && c != z){
            cout << "NO" << '\n';
        } else if (a <= b && b != x){
            cout << "NO" << '\n';
        } else if (a <= c && c != y){
            cout << "NO" << '\n';
        } else {
            cout << "YES" << '\n' << a << ' ' << b << ' ' << c << ' ' << '\n';
        }
    }
}