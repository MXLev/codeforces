//
// Created by Beast on 31.05.2022.
// https://codeforces.com/problemset/problem/732/A

#include <iostream>

using namespace std;

int main(){
    int k, r;
    cin >> k >> r;
    int num = k;
    int answ = 1;
    while (num % 10 != 0 && (num - r) % 10 != 0){
        answ++;
        num = k * answ;
    }
    cout << answ;
}