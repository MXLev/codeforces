//
// https://codeforces.com/problemset/problem/469/A
//

#include <iostream>
#include <set>

using namespace std;

int main() {
    int levels;
    int p1, p2;
    cin >> levels;
    cin >> p1;
    set<int> arr;
    for (int i = 0; i < p1; ++i) {
        int temp;
        cin >> temp;
        arr.insert(temp);
    }
    cin >> p2;
    for (int i = 0; i < p2; ++i) {
        int temp;
        cin >> temp;
        arr.insert(temp);
    }
    if (levels == arr.size()){
        cout << "I become the guy.";
    } else {
        cout << "Oh, my keyboard!";
    }
}