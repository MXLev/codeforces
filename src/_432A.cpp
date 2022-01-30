//
// https://codeforces.com/problemset/problem/1343/B
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    int start_index = 0;
    int asnw = 0;
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n; ++i) {
        if (arr[i] == 5){
            break;
        }
        if (n - i < 3){
            break;
        }
        vector<int> team(3);
        for (int j = start_index; j < 3 + start_index; ++j) {
            team[j - start_index] = arr[j];
        }
        sort(team.rbegin(), team.rend());
        if (5 - team[0] >= k){
            asnw++;
            for (int j = start_index; j < 3 + start_index; ++j) {
                arr[j] = 5;
            }
            start_index += 3;
            i += 2;
        }
    }
    cout << asnw;
}