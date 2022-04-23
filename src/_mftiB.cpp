//
// Created by Beast on 23.04.2022.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

bool custsort(int first, int second){
    return abs(first) < abs(second);
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> petya(n);
    set<int> egor;
    for (int i = 0; i < n; ++i) {
        cin >> petya[i];
    }
    for (int i = 0; i < m; ++i) {
        int v = 0;
        cin >> v;
        egor.insert(v);
    }
    vector<int> diff;

    for (int i = 0; i < petya.size(); ++i) {
        if (egor.count(petya[i])) {
            egor.erase(petya[i]);
        } else {
            diff.push_back(petya[i]);
        }
    }

    for (set<int>::iterator it = egor.begin(); it != egor.end(); ++it) {
        diff.push_back(-(*it));
    }

    sort(diff.begin(), diff.end(), custsort);

    if (diff.empty()) {
        cout << "EQUAL" << "\n";

        return 0;
    }

    for (int i = 0; i < diff.size(); ++i) {
        if (diff[i] >= 0) {
            cout << "+" << diff[i] << "\n";
        } else {
            cout << diff[i] << "\n";
        }
    }
}