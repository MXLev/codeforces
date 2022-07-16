//
// Created by Beast on 16.07.2022.
// https://codeforces.com/problemset/problem/822/A

#include <iostream>
#include <algorithm>

using namespace std;

long long factorial(unsigned long long n){
    long long result = 1;
    for (long long i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    long long a, b;
    cin >> a >> b;
    cout << factorial(min(a, b)) << '\n';
}