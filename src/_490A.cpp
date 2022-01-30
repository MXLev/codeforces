//
// https://codeforces.com/problemset/problem/490/A
//

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    vector<vector<int>> teams(n, vector<int> (3));
    int j = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] == 1){
            teams[j][0] = i + 1;
        } else if (arr[i] == 2){
            teams[j][1] = i + 1;
        } else {
            teams[j][2] = i + 1;
            j++;
        }
    }
}