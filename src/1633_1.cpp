//
// https://codeforces.com/contest/1633/problem/B
//

#include <iostream>

using namespace std;

int main() {
     int t;
     cin >> t;
    for (int i = 0; i < t; ++i) {
        string n;
        cin >> n;
        int zeros = 0, ones = 0;
        for (char i : n) {
            if (i == '1'){
                ones++;
            } else if (i == '0'){
                zeros++;
            }
        }
        if (zeros == ones){
            cout << 0 << '\n';
        } else if (zeros < ones){
            cout << zeros;
        } else if (zeros > ones){
            cout << ones;
        }
    }
}