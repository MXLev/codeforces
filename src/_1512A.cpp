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
    for (int q = 0; q < t; ++q) {
        int n;
        cin >> n;
        vector<pair<int, int>> arr(n);
        for (int j = 0; j < n; ++j) {
            cin >> arr[j].first;
            arr[j].second = j;
        }
        sort(arr.begin(), arr.end());
        for (int i = 0; i < n; ++i) {
            int same = 0;
            for (int j = i; j < n - 1; ++j) {
                if (arr[j].first == arr[j + 1].first){
                    same++;
                }
            }
            if (same != n - 2){
                cout << arr[i].second << '\n';
                break;
            }
        }
    }
}