//
// Created by Beast on 20.07.2022.
// https://codeforces.com/problemset/problem/1234/A

#include <iostream>
#include <algorithm>
#include <set>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int q = 0; q < t; ++q) {
        long long n;
        cin >> n;
        set<long long> arr;
        for (int i = 0; i < n; ++i) {
            int temp = 0;
            cin >> temp;
            arr.insert(temp);
        }
        long double sum = 0;
        for (long long i : arr) {
            sum += i;
        }
         cout << floor(sum / arr.size() + 0.5) << '\n';
    }
}