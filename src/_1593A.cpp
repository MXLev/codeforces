//
// Created by Beast on 08.07.2022.
// https://codeforces.com/problemset/problem/1368/A


#include <iostream>
#include <algorithm>
#include <vector>


using namespace std;

int main() {
    int t;
    cin >> t;
    for (int q = 0; q < t; ++q) {
        vector<long long> abc(3);
        cin >> abc[0] >> abc[1] >> abc[2];
        long long max = abc[0];
        vector<bool> indexMax(3);
        int maxIndex = 0;
        if (abc[1] > max){
            max = abc[1];
        }
        if (abc[2] > max){
            max = abc[2];
        }

        if (max == abc[0]){
            indexMax[0] = true;
            maxIndex++;
        }
        if (max == abc[1]){
            indexMax[1] = true;
            maxIndex++;
        }
        if (max == abc[2]){
            indexMax[2] = true;
            maxIndex++;
        }
        if (maxIndex != 1){
            for (int i = 0; i < 3; ++i) {
                if (indexMax[i]){
                    cout << 1 << ' ';
                } else {
                    cout << max - abc[i] + 1 << ' ';
                }
            }
            cout << '\n';
        } else {
            for (int i = 0; i < 3; ++i) {
                if (indexMax[i]){
                    cout << 0 << ' ';
                } else {
                    cout << max - abc[i] + 1 << ' ';
                }
            }
            cout << '\n';
        }

    }
}