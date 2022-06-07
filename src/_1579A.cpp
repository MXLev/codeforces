//
// Created by Beast on 07.06.2022.
// https://codeforces.com/problemset/problem/1579/A

#include <iostream>
#include <algorithm>
#include <cmath>


using namespace std;

int main() {
    int t;
    cin >> t;
    for (int q = 0; q <= t; ++q) {
        string word;
        cin >> word;
        int aCounter = 0, bCounter = 0, cCounter = 0;
        for (char i : word) {
            if (i == 'A'){
                aCounter++;
            }
            if (i == 'B'){
                bCounter++;
            }
            if (i == 'C'){
                cCounter++;
            }
        }
        if (aCounter == 0 && bCounter == cCounter){
            cout << "yes" <<  '\n';
            continue;
        } else if (cCounter == 0 && aCounter == bCounter){
            cout << "yes" << '\n';
            continue;

        } else if (bCounter == 0 && aCounter == 0 && cCounter == 0){
            cout << "yes" << '\n';
            continue;
        } else if (aCounter == bCounter - cCounter){
            if (cCounter == aCounter - bCounter){
                cout << "yes" << '\n';
                continue;
            }
        } else {
            cout << "no" << '\n';
        }
    }
}
