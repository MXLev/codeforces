//
// https://codeforces.com/problemset/problem/282/A
//

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int x = 0;
    for (int i = 0; i < n; ++i) {
        string input;
        cin >> input;
        if (input == "X++" || input == "++X"){
            ++x;
        } else if (input == "--X" || input == "X--"){
            x--;
        }
    }
    cout << x;
}