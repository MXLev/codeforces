//
// https://codeforces.com/problemset/problem/148/A
//

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int min_height = 101, min_index = 0;
    int max_height = 0, max_index = 0;

    for (int i = 0; i < n; ++i) {
        int temp;
        cin >> temp;
        if (temp > max_height){
            max_height = temp;
            max_index = i;
        }
        if (temp <= min_height){
            min_height = temp;
            min_index = i;
        }
    }
    int answ = n - (min_index + 1) + max_index;
    if (max_index > min_index){
        --answ;
    }
    cout << answ;
}