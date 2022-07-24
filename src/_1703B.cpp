//
// Created by Beast on 24.07.2022.
// https://codeforces.com/problemset/problem/1703/B

#include <iostream>
#include <algorithm>
#include <cmath>
#include <set>


using namespace std;

int main() {
    int t;
    cin >> t;
    for (int q = 0; q < t; ++q) {
        int n;
        cin >> n;
        string input;
        cin >> input;
        set<char> arr;
        for (char i:input) {
            arr.insert(i);
        }

        cout << n + arr.size() << '\n';
    }
}