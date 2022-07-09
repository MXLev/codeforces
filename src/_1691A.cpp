//
// Created by Beast on 09.07.2022.
// https://codeforces.com/problemset/problem/1691/A

#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>


using namespace std;

vector<int> nums;
vector<int> numsDublikate;
int answ = 0;

int calculate(int n){
    bool flag= false;
    for (int i = 0; i < n; ++i){
        if (i != 0 && (nums[i] + nums[i - 1]) % 2 != 0){
            answ++;
            flag = true;
            cout << nums[i] << ' ';
        } else if (i != 0 && (nums[i] + nums[i - 1]) % 2 == 0){
            numsDublikate.push_back(nums[i]);
        }
    }
    nums = numsDublikate;
    if (!flag){
        calculate(n);
        return 0;
    }
}

int main() {
    int t;
    cin >> t;
    for (int q = 0; q < t; ++q) {
        int n;
        cin >> n;
        for (int i = 0; i < n; ++i) {
            int w;
            cin >> w;
            nums.push_back(w);
        }
        calculate(n);
        cout << answ << '\n';
        n = 0;
        nums.assign(0, 0);
        numsDublikate.assign(0, 0);
        answ = 0;
    }
}