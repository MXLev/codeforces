//
// Created by Beast on 10.07.2022.
// https://codeforces.com/problemset/problem/1506/A

#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>


using namespace std;

int main() {
    int t;
    cin >> t;
    for (int q = 0; q < t; ++q) {
//        long long n, m, x;
//        cin >> n >> m >> x;
//        vector<vector<long long>> tableS(n, vector<long long> (m));
//        long long temp = 1, indexX = 0, indexY = 0;
//        for (long long i = 0; i < m; ++i) {
//            bool flag = false;
//            for (long long j = 0; j < n; ++j) {
//                tableS[j][i] = temp;
//                if (temp == x){
//                    indexX = j;
//                    indexY = i;
//                    flag = true;
//                    break;
//                }
//                temp++;
//            }
//            if (flag){
//                break;
//            }
//        }
        int n, m, x;
        cin >> n >> m >> x;
        int temp = 1;
        vector<vector<int>> tableN(n, vector<int> (m));
        for (int i = 0; i < n; ++i) {
            bool flag = false;
            for (int j = 0; j < m; ++j) {
                tableN[i][j] = temp;
                if ((ceil(x / m) - 1) == i && ((ceil(x / m) - 1) * (m - 1)) == j){
                    cout << temp << '\n';
                    flag = true;
                }
                temp++;
            }
            if (flag){
                break;
            }
        }

    }
}