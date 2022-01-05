//
// https://codeforces.com/problemset/problem/263/A
//

#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<vector<int>> arr(5, vector<int> (5));
    pair<int, int> index;
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            int temp;
            cin >> temp;
            if (temp == 1){
                index.first = i;
                index.second = j;
            }
        }
    }
    cout << abs(2 - index.first) + abs(2 - index.second);
}