//
// https://codeforces.com/problemset/problem/977/A
//

#include <iostream>

using namespace std;

int main() {
    int k;
    string n;
    cin >> n >> k;
    int nInt = stoi(n);
    for (int i = 0; i < k; ++i) {
        if (n[n.size() - 1] == '0'){
            nInt /= 10;
            n = to_string(nInt);
        } else {
            nInt--;
            n = to_string(nInt);
        }
    }
    cout << nInt;
}