//
// Created by Beast on 08.03.2022.
// https://codeforces.com/problemset/problem/431/A

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int a1, a2, a3, a4;
    cin >> a1 >> a2 >> a3 >> a4;
    string s;
    cin >> s;
    int answ = 0;
    for (char i : s) {
        if (i == '1'){
            answ += a1;
        } else if (i == '2'){
            answ += a2;
        } else if (i == '3'){
            answ += a3;
        }  else if (i == '4'){
            answ += a4;
        }
    }
    cout << answ;
}