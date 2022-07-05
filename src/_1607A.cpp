//
// Created by Beast on 05.07.2022.
// https://codeforces.com/problemset/problem/1607/A


#include <iostream>
#include <algorithm>


using namespace std;

int main() {
    int t;
    cin >> t;
    for (int q = 0; q < t; ++q) {
        string keyboard;
        string word;
        cin >> keyboard >> word;
        int answ = 0, lastIndex = keyboard.find(word[0]);
        for (char i : word) {
            int temp = lastIndex - keyboard.find(i);
            answ += abs(temp);
            lastIndex = keyboard.find(i);
        }
        cout << answ << '\n';
    }
}