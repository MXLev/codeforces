//
// https://codeforces.com/problemset/problem/344/A
//

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int islands = 1, last;
    cin >> last;
    for (int i = 0; i < n - 1; ++i) {
        int current;
        cin >> current;
        if (last != current){
            islands++;
        }
        last = current;
    }
    cout << islands;
}