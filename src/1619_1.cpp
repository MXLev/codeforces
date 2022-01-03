//
// https://codeforces.com/contest/1619/problem/B
//

#include <iostream>
#include <set>

using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        long long n, counter = 1;
        cin >> n;
        for (int j = 2; j < n; ++j) {
            long long temp = j * j;
            if (temp <= n) {
                if ((j * 2 * (j * 2)) != temp * j) {
                    ++counter;
                }
            } else {
                break;
            }
            cout << temp << " - " << temp * j << " - " << counter << "\n";
            if ((temp * j) <= n){
                ++counter;
            }
        }
        cout << counter << '\n';
    }
}