//
// Created by Beast on 25.02.2022.
// https://codeforces.com/problemset/problem/1560/A

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int q = 0; q < t; ++q) {
        int k;
        cin >> k;
        int answ = 0;
        for (int i = 0; i < k; ++i) {
            answ++;
            basic_string<char> str = to_string(answ);
            if (answ % 3 == 0 || str[str.size() - 1] == '3'){
                i--;
            }
        }
        cout << answ << '\n';
    }
}