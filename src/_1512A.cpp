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
        vector<pair<int, int>> arr(n);
        for (int j = 0; j < n; ++j) {
            cin >> arr[j].first;
            arr[j].second = j;
        }
        sort(arr.begin(), arr.end());
        for (int j = 1; j < n - 1; ++j) {
            if (arr[j].first != arr[j - 1].first){
                if (arr[j].first != arr[j + 1].first){
                    cout << arr[j].second + 1 << '\n';
                    break;
                } else {
                    cout << arr[j].second << '\n';
                    break;
                }
            }
        }
    }
}