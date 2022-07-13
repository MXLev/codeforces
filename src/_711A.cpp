//
// Created by Beast on 13.07.2022.
// https://codeforces.com/problemset/problem/711/A

#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>


using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    bool flag = false;
    for (int i = 0; i < n; ++i) {
        if (arr[i][0] == arr[i][1] && arr[i][0] == 'O'){
            arr[i][0] = '+';
            arr[i][1] = '+';
            flag = true;
            break;
        } else if (arr[i][3] == arr[i][4] && arr[i][4] == 'O'){
            arr[i][3] = '+';
            arr[i][4] = '+';
            flag = true;
            break;
        }
    }
    if (flag){
        cout << "YES" << '\n';
        for (int i = 0; i < n; ++i) {
            cout << arr[i] << '\n';
        }
    } else {
        cout << "NO" << '\n';
    }
}