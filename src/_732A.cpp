//
// Created by Beast on 31.05.2022.
// https://codeforces.com/problemset/problem/732/A

#include <iostream>

using namespace std;

int main() {
    int k, r;
    cin >> k >> r;
    k -= r;
    if ((k + r) % 10 != 0 && (k + r) < k - (k % 10)){
        k += r;
    }
    long long counter = 0;
    while (k % 10 != 0){
        r *= 2;
        counter++;
    }
    cout << counter;
}
