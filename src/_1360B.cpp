//
// Created by Beast on 24.02.2022.
// https://codeforces.com/problemset/problem/1360/B


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int q = 0; q < t; ++q) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        int minDiff = 1001;
        for (int i = 0; i < n - 1; ++i) {
            for (int j = i + 1; j < n; ++j) {
                if (abs(arr[i] - arr[j]) < minDiff){
                    minDiff = abs(arr[i] - arr[j]);
                }
            }
        }
        cout << minDiff << '\n';
    }
}