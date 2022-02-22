//
// Created by Beast on 22.02.2022.
// https://codeforces.com/contest/1644/problem/B

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int q = 0; q < t; ++q) {
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        int max_sum = 0;
        for (int i = 0; i < n; ++i) {
            int sum = 0;
            for (int j = 0; j <= i; ++j) {
                sum += arr[j];
            }
            if (sum > max_sum){
                max_sum = sum;
            }
        }
        cout << max_sum << '\n';
    }
}