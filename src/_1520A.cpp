//
// Created by Beast on 16.02.2022.
// https://codeforces.com/problemset/problem/1520/A

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
        vector<char> arr(n);
        bool flag = false;
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        for (int i = 0; i < n; ++i) {
            if (i > 0 && find(arr.begin(), arr.end(), arr[i]) == arr.end() && arr[i - 1] != arr[i]){
                cout << "NO" << '\n';
                flag = true;
                break;
            }
        }
        if (flag){
            continue;
        }
        cout << "YES" << '\n';
    }
}