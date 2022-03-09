//
// Created by Beast on 09.03.2022.
// https://codeforces.com/problemset/problem/32/B

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string str;
    cin >> str;
    for (int i = 0; i < str.size(); ++i) {
        if (str[i] == '.'){
            str[i] = '0';
        } else if (i < str.size() - 1 && str[i] == '-'){
            if (str[i + 1] == '.'){
                str[i] = '1';
                str[i + 1] = ' ';
                i++;
            } else if (str[i + 1] == '-'){
                str[i] = '2';
                str[i + 1] = ' ';
                i++;
            }
        }
    }
    for (char i : str) {
        if (i != ' '){
            cout << i;
        }
    }
}