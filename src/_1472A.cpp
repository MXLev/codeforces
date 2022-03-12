//
// Created by Beast on 12.03.2022.
// https://codeforces.com/problemset/problem/1472/A

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        int w, h, n;
        cin >> w >> h >> n;
        int paperPeaces = 1;
        bool flag = true;
        while (paperPeaces < n){
            if (w % 2 == 0){
                paperPeaces *= 2;
                w /= 2;
                continue;
            }
            if (h % 2 == 0){
                paperPeaces *= 2;
                h /= 2;
                continue;
            } else {
                flag = false;
                cout << "NO" << '\n';
                break;
            }
        }
        if (flag){
            cout << "YES" << '\n';
        }
    }
}