//
// Created by Beast on 07.03.2022.
// https://codeforces.com/problemset/problem/749/A

#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> answ;
    while (n > 1){
        n -= 2;
        answ.push_back(2);
    }
    if (n == 1){
        answ.pop_back();
        answ.push_back(n + 2);
    }
    cout << answ.size() << '\n';
    for (int i : answ) {
        cout << i << ' ';
    }
}