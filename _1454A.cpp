//
// Created by Beast on 29.03.2022.
// https://codeforces.com/problemset/problem/1454/A

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        int n;
        cin >> n;
        vector<int> arr;
        for (int j = n; j > 0; j--) {
            arr.push_back(j);
        }
        for (int j = 0; j < n; ++j) {
            if (arr[j] == j + 1){
                int c = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = c;
            }
        }
        for (int j = 0; j < n; ++j) {
            cout << arr[j] << ' ';
        }
        cout << '\n';
    }
}