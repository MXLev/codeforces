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
    for (int i = 0; i < n; ++i) {
        cin >> events[i];
        int temp = events[i];
        while (temp > 0){
            police.push_back(i);
            temp--;
        }
    }
    int crimes = 0;
    for (int i = 0; i < n; ++i) {
        if (events[i] == -1){
            bool breaked = false;
            for (int j = 0; j < police.size(); ++j) {
                if (police[j] < i){
                    police[j] = n + 1;
                    breaked = true;
                    break;
                }
            }
            if (!breaked){
                crimes++;
            }
        }
    }
    cout << crimes;
}