//
// https://codeforces.com/problemset/problem/1367/A
//

#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int a = 0; a < t; ++a) {
        string input;
        cin >> input;
        for (int i = 0; i < input.size() - 2; ++i) {
            if (input[i] == input[i + 1]){
                input[i + 1] = '0';
                i += 1;
            }
        }
        for (char i : input) {
            if (i != '0'){
                cout << i;
            }
        }
        cout << '\n';
    }
}