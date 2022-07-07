//
// Created by Beast on 07.07.2022.
// https://codeforces.com/problemset/problem/1676/B

#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>


using namespace std;

int main() {
    int t;
    cin >> t;
    for (int q = 0; q < t; ++q) {
        int n;
        cin >> n;
        vector<int> treatment(n);
        for (int i = 0; i < n; ++i) {
            cin >> treatment[i];
        }

        sort(treatment.begin(), treatment.end());

        int min = treatment[0], answ = 0;
        for (int i = 0; i < n; ++i) {
            answ += treatment[i] - min;
        }
        cout << answ << '\n';
    }
}