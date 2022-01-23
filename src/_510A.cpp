//
// https://www.youtube.com/watch?v=3WuclBcliWQ&ab_channel=MovieMaker
//

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<char>> arr(n, vector<char> (m, '.'));
    for (int i = 0; i < n; i += 2) {
        for (int j = 0; j < m; ++j) {
            arr[i][j] = '#';
        }
    }
    int check = 0;
    for (int i = 1; i < n; i += 2) {
        if (check == 0){
            arr[i][m - 1] = '#';
            check = 1;
        } else {
            arr[i][0] = '#';
            check = 0;
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << arr[i][j];
        }
        cout << '\n';
    }
}