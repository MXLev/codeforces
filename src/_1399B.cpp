//
// Created by Beast on 04.06.2022.
// https://codeforces.com/problemset/problem/1399/B

#include <iostream>
#include <vector>

using namespace std;

int main(){
    int t;
    cin >> t;
    for (int q = 0; q < t; ++q) {
        int n;
        cin >> n;
        vector<long long> a(n);
        vector<long long> b(n);
        long long minA = 10e9 + 1, minA_index = 0;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            if (a[i] < minA){
                minA = a[i];
                minA_index = i;
            }
        }
        long long minB = 10e9+1, minB_index = 0;
        for (int i = 0; i < n; ++i) {
            cin >> b[i];
            if (b[i] < minB){
                minB = b[i];
                minB_index = i;
            }
        }
        int answ = 0;
        for (int i = 0; i < n; ++i) {
            if (i != minA_index){
                if (i != minB_index){
                    answ += min(a[i], b[i]);
                    answ += abs(a[i] - b[i]);
                } else {
                    answ +=
                }
            }
        }
    }
}