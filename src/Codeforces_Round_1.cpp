//
// Created by Beast on 14.12.2021.
//
#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        long a, b, c, d, e, f, g;
        cin >> a >> b >> c >> d >> e >> f >> g;
        if (a + b == c){
            cout << a <<  ' ' << b <<  ' ' << d << '\n';
        } else {
            cout << a <<  ' ' << b <<  ' ' << c << '\n';
        }
    }
}