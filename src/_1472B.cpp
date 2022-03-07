//
// Created by Beast on 07.03.2022.
// https://codeforces.com/problemset/problem/1472/B

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int q = 0; q < t; ++q) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        int sum = 0;
        for (int i = 0; i < n; ++i) {
            sum += arr[i];
        }
        int checker = sum / 2;
        int sum1 = 0, last_index = 0;
        for (int i = 0; i < n; ++i) {
            sum1 += arr[i];
            if (checker == sum1){
                last_index = i;
                break;
            }
        }
        int sum2 = 0;
        for (int i = last_index; i < n; ++i) {
            sum2 += arr[i];
            if (checker == sum2){
                break;
            } else if (checker < sum2){
            }
        }
        if (sum1 == sum2){
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';
        }
    }
}
