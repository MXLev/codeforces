//
// https://codeforces.com/problemset/problem/427/A
//

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> events(n);
    vector<int> police;
    int free_police = 0;
    for (int i = 0; i < n; ++i) {
        cin >> events[i];
        if (events[i] == 1){
            police.push_back(i);
            free_police += events[i];
        }
    }
    int crimes = 0;
    for (int i = 0; i < n; ++i) {
        if (events[i] == -1){
            for (int j = 0; j < police.size(); ++j) {
                if (police[j] < i){
                    crimes--;
                    police[j] = n + 1;
                    break;
                } else if (police[j] > j){
                    crimes++;
                    break;
                }
            }
        }
    }
    cout << crimes;
}