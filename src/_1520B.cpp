//
// Created by Beast on 05.04.2022.
// https://codeforces.com/problemset/problem/1520/B

#include <iostream>

using namespace std;

int calculate(int n){
    int asnw = 9;
    for (int i = 10; i <= n; i += 1) {
        bool isOrdinary = false;
        string strI = to_string(i);
        for (int j = 1; j < strI.size(); ++j) {
            if (strI[j] == strI[j - 1]) {
                isOrdinary = true;
            } else {
                isOrdinary = false;
                break;
            }
        }
        if (isOrdinary) {
            asnw++;
        }
    }
    return asnw;
}

int calculate2(int n){
    if ((n / 11) % 10 == 0){
        n--;
    }
    n -= n % 11;
    return 9 + n / 10;
}

int main() {
    for (int q = 10; true; ++q) {
        if (calculate(q) != calculate2(q)){
            cout << q << ' ' << "right answ" << ' ' << calculate(q) << ' ' << "answ" << ' ' << calculate2(q);
            break;
        }
    }
}