//
// https://codeforces.com/problemset/problem/1367/B
//

#include <iostream>
#include <vector>

using namespace std;

int main(){
    int t;
    cin >> t;
    for (int q = 0; q < t; ++q) {
        int n;
        cin >> n;
        vector<int> arr(n);
        int even = 0, odd = 0;
        for (int j = 0; j < n; ++j) {
            cin >> arr[j];
            if (arr[j] % 2 == 0){
                even++;
            } else {
                odd++;
            }
        }
        if (n == 1 && arr[0] % 2 != 0){
            cout << -1 << '\n';
            continue;
        }
        int answ = 0;
        for (int i = 0; i < n; ++i) {
            if (i % 2 != 0 && arr[i] % 2 == 0){
                answ++;
            } else if (i % 2 == 0 && arr[i] % 2 != 0){
                answ++;
            }
        }
        cout << answ / 2 << '\n';
    }
}