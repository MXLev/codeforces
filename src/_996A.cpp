//
// https://codeforces.com/problemset/problem/996/A
//

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int temp = 0;
    temp += n / 100;
    n %= 100;
    temp += n / 20;
    n %= 20;
    temp += n / 10;
    n %= 10;
    temp += n / 5;
    n %= 5;
    temp += n;
    cout << temp;
}