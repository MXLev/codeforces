//
// Created by Beast on 22.02.2022.
//  https://codeforces.com/contest/1644/problem/0

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int q = 0; q < t; ++q) {
        string input;
        cin >> input;
        bool red = false, green = false, blue = false, flag = false;
        for (char i : input) {
            if (i == 'r'){
                red = true;
            } else if (i == 'g'){
                green = true;
            } else if(i == 'b'){
                blue = true;
            }
            if (i == 'R'){
                if (!red){
                    cout << "NO" << '\n';
                    flag = true;
                    break;
                }
            }
            if (i == 'G'){
                if (!green){
                    cout << "NO" << '\n';
                    flag = true;
                    break;
                }
            }
            if (i == 'B'){
                if (!blue){
                    cout << "NO" << '\n';
                    flag = true;
                    break;
                }
            }
        }
        if (!flag){
            cout << "YES" << '\n';
        }
    }
}