//
// https://codeforces.com/problemset/problem/231/A
//

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int counter = 0;
    for (int i = 0; i < n; ++i) {
        int p, v, t, temp_counter = 0;
        cin >> p >> v >> t;
        if (p == 1) {
            ++temp_counter;
        }
        if (v == 1) {
            ++temp_counter;
        }
        if (t == 1) {
            ++temp_counter;
        }
        if (temp_counter >= 2){
            ++counter;
        }
    }
    cout << counter;
}
