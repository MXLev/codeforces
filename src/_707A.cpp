//
// Created by Beast on 19.03.2022.
// https://codeforces.com/problemset/problem/707/A

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<char>> arr(n, vector<char> (m));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> arr[i][j];
        }
    }
    bool isColored = false;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (arr[i][j] != 'W' && arr[i][j] != 'G' && arr[i][j] != 'B'){
                isColored = true;
                break;
            }
        }
    }
    if (isColored){
        cout << "#Color";
    } else {
        cout << "#Black&White";
    }
}