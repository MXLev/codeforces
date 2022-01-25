//
// https://codeforces.com/problemset/problem/750/A
//

#include <iostream>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int problems = 0;
    int left_time = 240 - k;
    for (int i = 1; i <= n; ++i) {
        if (left_time - (5 * i) >= 0){
            problems++;
            left_time -= (5 * i);
        }
    }
    cout << problems;
}
