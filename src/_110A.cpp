//
// https://codeforces.com/problemset/problem/110/A
//

#include <iostream>

using namespace std;

int main() {
    string n;
    cin >> n;
    int lucky = 0;
    for (char i : n) {
        if (i == '4' || i == '7'){
            lucky++;
        }
    }
    int sum = 0;
    for (char i : to_string(lucky)) {
        if (i != '4' && i != '7'){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}