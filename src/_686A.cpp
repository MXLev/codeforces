//
// Created by Beast on 12.07.2022.
// https://codeforces.com/problemset/problem/686/A

#include <iostream>
#include <algorithm>
#include <cmath>


using namespace std;

int main() {
    long long n, x;
    cin >> n >> x;
    int sadKid = 0;
    for (int i = 0; i < n; ++i) {
        char pORm;
        long long num_of;
        cin >> pORm >> num_of;
        if (pORm == '+'){
            x += num_of;
        } else if (pORm == '-'){
            if (x < num_of){
                sadKid++;
            } else {
                x -= num_of;
            }
        }
    }
    cout << x << ' ' << sadKid;
}