//
// https://codeforces.com/problemset/problem/1512/A
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int j = 0; j < n; ++j) {
            cin >> arr[j];
        }
        for (int j = 1; j < n - 1; ++j) {
            if (arr[j] != arr[j + 1]){
                if (arr[j] != arr[j - 1]){
                    cout << j + 1 << '\n';
                    break;
                } else {
                    cout << j << '\n';
                    break;
                }
            } else if (arr[j] != arr[j - 1]){
                cout << j + 1 << '\n';
                break;
            }
        }
    }
}