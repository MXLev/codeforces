//
// https://codeforces.com/problemset/problem/758/A
//

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    int max = 0;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        if (arr[i] > max){
            max = arr[i];
        }
    }
    int s = 0;
    for (int i = 0; i < n; ++i) {
        s += max - arr[i];
    }
    cout << s;
}
