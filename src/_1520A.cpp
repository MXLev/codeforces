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
        for (int i = 1; i < arr.size(); ++i) {
            for (int j = 0; j < i; ++j) {
                if (arr[j] == arr[i] && j + 1 != i){
                    bool flag2 = false;
                    for (int k = j; k < i - 1; ++k) {
                        if (arr[k] == arr[k + 1]){
                            flag2 = true;
                        } else {
                            flag2 = false;
                            break;
                        }
                    }
                    if (!flag2){
                        flag = true;
                        break;
                    }
                }
            }
            if (flag){
                break;
            }
        }
        if (flag){
            cout << "NO" << '\n';
        } else {
            cout << "YES" << '\n';
        }
    }
}