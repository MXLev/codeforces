//
// https://codeforces.com/problemset/problem/486/A
//

#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    cout.tie(0);
    long long n;
    cin >> n;
    if (n % 2 == 0){
        cout << n / 2;
    } else {
        cout << -((n + 1) / 2);
    }
}