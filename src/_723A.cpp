//
// https://codeforces.com/problemset/problem/723/A
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int x1, x2, x3;
    cin >> x1 >> x2 >> x3;
    vector<int> arr(3);
    arr[0] = abs(x1 - x3) + abs(x2 - x3);
    arr[1] = abs(x1 - x2) + abs(x3 - x2);
    arr[2] = abs(x2 - x1) + abs(x3 - x1);
    sort(arr.begin(), arr.end());
    cout << arr[0];
}