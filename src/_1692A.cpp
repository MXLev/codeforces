//
// Created by Beast on 04.07.2022.
// https://codeforces.com/problemset/problem/1692/A


#include <iostream>
#include <algorithm>
#include <cmath>


using namespace std;

int main() {
    int t;
    cin >> t;
    for (int q = 0; q < t; ++q) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int answ = 0;
        if (a < b){
            answ++;
        }
        if (a < c){
            answ++;
        }
        if (a < d){
            answ++;
        }
        cout << answ << '\n';
    }
}