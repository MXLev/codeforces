//
// https://codeforces.com/problemset/problem/71/A
//
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        string input;
        cin >> input;
        if (input.size() <= 10){
            cout << input << '\n';
        } else {
            cout << input[0] << input.size() - 2 << input[input.size() - 1] << '\n';
        }
    }
}
