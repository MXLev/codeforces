//
// https://codeforces.com/problemset/problem/520/A
//

#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

int main() {
    int n;
    cin >> n;
    set<char> word;
    string temp;
    cin >> temp;
    for (int i = 0; i < n; ++i) {
        word.insert(tolower(temp[i]));
    }
    if (word.size() == 26){
        cout << "YES";
    } else {
        cout << "NO";
    }
}