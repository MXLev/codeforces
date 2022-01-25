//
// https://codeforces.com/problemset/problem/155/A
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
    int max = -1, min = 10001;
    int cont = -2;
    for (int i = 0; i < n; ++i) {
        if (arr[i] > max){
            cont++;
            max = arr[i];
        }
        if (arr[i] < min){
            cont++;
            min = arr[i];
        }
    }
    if (cont < 0) {
        cout << 0;
    } else {
        cout << cont;
    }
}