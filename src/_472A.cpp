//
// Created by Beast on 02.06.2022.
// https://codeforces.com/problemset/problem/472/A

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    if (n % 2 == 0){
        cout << 6 << ' ' << n - 6;
    } else {
        cout << 9 << ' ' << n - 11;
    }
}