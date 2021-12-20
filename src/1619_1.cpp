//
// https://codeforces.com/contest/1619/problem/B
//

#include <iostream>
#include <set>

using namespace std;

int main() {
    int t;
    cin >> t;

    set<long long> numbers;

    for (int i = 0; i < t; ++i) {
        long long n, counter = 1;
        cin >> n;
        for (int j = 2; j < n; ++j) {
            long long temp = j * j;
            if (temp <= n/* && numbers.count(temp) == 0*/){
                ++counter;
                numbers.insert(j * j);
            } else {
                break;
            }
            cout << temp << " - " << temp * j << " - " << counter << "\n";
            if ((j * j * j) <= n){
                ++counter;
                numbers.insert(j * j * j);
            }
        }
        cout << numbers.size() << ' ' << counter << '\n';
    }
}