//
// https://codeforces.com/problemset/problem/490/A
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> input(n);
    vector<int> it;
    vector<int> math;
    vector<int> pe;
    for (int i = 0; i < n; ++i) {
        cin >> input[i];
        if (input[i] == 1){
            it.push_back(i + 1);
        } else if (input[i] == 2){
            math.push_back(i + 1);
        } else if (input[i] == 3){
            pe.push_back(i + 1);
        }
    }
    vector<int> temp(3);
    temp[0] = it.size();
    temp[1] = math.size();
    temp[2] = pe.size();
    sort(temp.begin(), temp.end());
    if (temp[0] == 0){
        cout << 0;
        return 0;
    }
    cout << temp[0] << '\n';
    for (int i = 0; i < temp[0]; ++i) {
        cout << it[i] << ' ' << math[i] << ' '   << pe[i] << '\n';
    }
}