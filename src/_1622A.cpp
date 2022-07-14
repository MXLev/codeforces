//
// Created by Beast on 14.07.2022.
// https://codeforces.com/problemset/problem/1622/A

#include <iostream>
#include <algorithm>
#include <vector>


using namespace std;

int main() {
    int t;
    cin >> t;
    for (int q = 0; q < t; ++q) {
        vector<int> arr(3);
        cin >> arr[0] >> arr[1] >> arr[2];
        sort(arr.begin(), arr.end());
        if (arr[0] + arr[1] == arr[2]){
            cout << "YES" << '\n';
        } else if (arr[0] == arr[1]) {
            if (arr[2] % 2 == 0){
                cout << "YES" << '\n';
            } else {
                cout << "NO" << '\n';
            }
        } else if (arr[0] == arr[2]){
            if (arr[1] % 2 == 0) {
                cout << "YES" << '\n';
            } else {
                cout << "NO" << '\n';
            }
        } else if (arr[1] == arr[2]) {
            if (arr[0] % 2 == 0) {
                cout << "YES" << '\n';
            } else {
                cout << "NO" << '\n';
            }
        } else {
            cout << "NO" << '\n';
        }
    }
}