//
// Created by Beast on 25.07.2022.
// https://codeforces.com/problemset/problem/1703/A

#include <iostream>
#include <algorithm>


using namespace std;

int main(){
    int t;
    cin >> t;
    for (int q = 0; q < t; ++q) {
        string input;
        cin >> input;
        input[0] = toupper(input[0]);
        input[1] = toupper(input[1]);
        input[2] = toupper(input[2]);
        if (input == "YES"){
            cout << input << '\n';
        } else {
            cout << "NO" << '\n';
        }
    }
}