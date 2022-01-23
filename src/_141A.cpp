//
// https://codeforces.com/problemset/problem/141/A
//

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string a, b, ab;
    cin >> a >> b >> ab;
    a += b;
    sort(a.begin(), a.end());
    sort(ab.begin(), ab.end());
    if (a == ab){
        cout << "YES";
    } else {
        cout << "NO";
    }
}