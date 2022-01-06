//
// https://codeforces.com/problemset/problem/339/A
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    string input;
    vector<int> num;
    cin >> input;
    for (int i = 0; i < input.size(); i += 2) {
        num.push_back(input[i] - 48);
    }
    sort(num.begin(),num.end());
    for (int i = 0; i < num.size(); ++i) {
        if (num.size() - 1 != i){
            cout << num[i] << '+';
        } else {
            cout << num[i];
        }
    }
}