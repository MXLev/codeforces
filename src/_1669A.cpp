//
// Created by Beast on 03.07.2022.
// https://codeforces.com/problemset/problem/1669/A

#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int q = 0; q < t; ++q) {
        int rating;
        cin >> rating;
        if (1900 <= rating){
            cout << "Division 1" << '\n';
            continue;
        }
        if (1600 <= rating && rating <= 1899){
            cout << "Division 2" << '\n';
            continue;
        }
        if (1400 <= rating && rating <= 1599){
            cout << "Division 3" << '\n';
            continue;
        }
        if (1399 >= rating){
            cout << "Division 4" << '\n';
            continue;
        }
    }
}