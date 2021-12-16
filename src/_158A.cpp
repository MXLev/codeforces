//
// https://codeforces.com/problemset/problem/158/A
//

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int counter = 0;
    for (int i = 0; i < n; ++i) {
        if ((arr[i] > 0) && (arr[i] >= arr[k - 1])) {
            counter++;
        }
    }
    cout << counter << "\n";
}