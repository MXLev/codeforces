//
// https://codeforces.com/contest/1619/problem/0
//

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
       string input;
       cin >> input;
        if (input.size() % 2 == 0){
            int size = input.size() / 2;
            if (input.substr(0, size) == input.substr(size)){
                cout << "YES" << '\n';
            } else {
                cout << "NO" << '\n';
            }
        } else {
            cout << "NO" << '\n';
        }
    }
}