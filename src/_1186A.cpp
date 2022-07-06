//
// Created by Beast on 06.07.2022.
// https://codeforces.com/problemset/problem/1186/A


#include <iostream>
#include <algorithm>
#include <cmath>


using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    if (min(m, k) >= n){
        cout << "Yes";
    } else {
        cout << "No";
    }
}