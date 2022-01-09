//
// https://codeforces.com/problemset/problem/41/A
//

#include <iostream>

using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    if (s.size() > t.size() || s.size() < t.size()){
        cout << "NO";
        return 0;
    }
    for (int i = 0, j = t.size() - 1; i < s.size(); ++i, --j) {
        if (s[i] != t[j]){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}