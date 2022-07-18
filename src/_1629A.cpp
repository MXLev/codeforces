//
// Created by Beast on 18.07.2022.
// https://codeforces.com/problemset/problem/1629/A

#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>


using namespace std;

int main() {
    int t;
    cin >> t;
    for (int q = 0; q < t; ++q) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        vector<int> b(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        for (int i = 0; i < n; ++i) {
            cin >> b[i];
        }
        vector<bool> used(n, false);
        bool flag = true;
        while (flag){
            for (int i = 0; i < n; ++i) {
                if (a[i] <= k && !used[i]){
                    used[i] = true;
                    k += b[i];
                    flag = true;
                    break;
                }
                flag = false;
            }
        }
        cout << k << '\n';
    }
}