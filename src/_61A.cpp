//
// https://codeforces.com/problemset?order=BY_RATING_ASC
//

#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    cout.tie(0);
    string string1, string2;
    cin >> string1 >> string2;
    for (int i = 0; i < string1.size(); ++i) {
        if (string1[i] != string2[i]){
            cout << 1;
        } else {
            cout << 0;
        }
    }
}