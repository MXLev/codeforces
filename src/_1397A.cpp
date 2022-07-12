//
// Created by Beast on 11.07.2022.
// https://codeforces.com/problemset/problem/1397/A

#include <iostream>
#include <algorithm>
#include <vector>
#include <map>


using namespace std;

int main() {
    int t;
    cin >> t;
    for (int q = 0; q < t; ++q) {
        int n;
        cin >> n;
        vector<string> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        map<char, int> letters;

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < arr[i].size(); ++j) {
                if (letters.find(arr[i][j]) != letters.end()){
                    letters[letters.find(arr[i][j])] += 1;
                } else {
                    letters[letters.find(arr[i][j])] = 1;
                }
            }
        }
        int answ = 0;
        for (int i = 0; i < letters.size(); ++i) {
            answ += letters[i];
        }
        cout << answ << '\n';
    }
}