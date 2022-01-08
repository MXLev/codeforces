//
// https://codeforces.com/problemset/problem/59/A
//

#include <iostream>

using namespace std;

int main() {
    string word;
    cin >> word;
    int upper_letter = 0;
    int lower_letter = 0;
    for (char i : word) {
        if (islower(i)){
            lower_letter++;
        } else {
            upper_letter++;
        }
    }
    if (lower_letter >= upper_letter){
        for (char & i : word) {
            i = tolower(i);
        }
    } else {
        for (char & i : word) {
            i = toupper(i);
        }
    }
    cout << word;
}