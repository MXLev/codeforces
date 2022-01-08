//
// https://codeforces.com/problemset/problem/546/A
//

#include <iostream>

using namespace std;

int main() {
    int k = 0, w = 0;
    long long  n = 0;
    cin >> k >> n >> w;
    long long sum = 0;
    for (int i = 1; i <= w; ++i) {
        sum += i * k;
    }
    if (sum > n){
        cout << sum - n;
    } else {
        cout << 0;
    }
}