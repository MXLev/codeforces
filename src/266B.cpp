//
// https://codeforces.com/problemset/problem/266/B
//

#include <iostream>

using namespace std;

int main() {
    int n, t;
    cin >> n >> t;
    string queue;
    cin >> queue;
    for (int i = 0; i < t; ++i) {
        for (int j = 0; j < n; ++j) {
            if (queue[j] == 'B' && 'G' == queue[j + 1]){
                char temp;
                temp = queue[j];
                queue[j] = queue[j + 1];
                queue[j + 1] = temp;
                j += 1;
            }
        }
    }
    cout << queue;
}