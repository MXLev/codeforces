//
// Created by Beast on 05.03.2022.
// https://codeforces.com/problemset/problem/381/A

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        int sumS = 0, sumD = 0;
        if (n < 2){
            cout << arr[0] << ' ' << 0;
            return 0;
        }
        for (int i = 0, j = n - 1; i <= j;) {
            if (arr[i] >= arr[j]){
                sumS += arr[i];
                arr[i] = 0;
                i++;
            } else if (arr[i] < arr[j]){
                sumS += arr[j];
                arr[j] = 0;
                --j;
            }
            if (arr[i] >= arr[j]){
                sumD += arr[i];
                arr[i] = 0;
                i++;
            } else if (arr[i] < arr[j]){
                sumD += arr[j];
                arr[j] = 0;
                --j;
            }
        }
        cout << sumS << ' ' << sumD << '\n';
}