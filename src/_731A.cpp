//
// Created by Beast on 09.06.2022.
//https://codeforces.com/problemset/problem/731/A

#include <iostream>
#include <algorithm>
#include <cmath>


using namespace std;

int main() {
    string word;
    cin >> word;
    int answ = 0;
    for (int i = 0; i < word.size(); ++i) {
        if (i == 0){
            answ += min(abs('a' - word[i]), abs(word[i] - 'a' - 48)) + 1;
        } else {
            answ += min(abs(word[i - 1] - word[i]), abs(word[i] - word[i - 1])) + 1;
        }
    }
    cout << answ;
}