//
// Created by Beast on 21.02.2022.
// https://codeforces.com/problemset/problem/151/A

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    vector<int> arr;
    arr.push_back((k * l) / nl);
    arr.push_back(c * d);
    arr.push_back(p / np);
    sort(arr.begin(), arr.end());
    cout << arr[0] / n;
}