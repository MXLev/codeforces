//
// https://codeforces.com/problemset/problem/112/A
//

#include <iostream>

using namespace std;

int main() {
    string str1;
    string str2;
    cin >> str1 >> str2;
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < str1.size(); ++i) {
        str1[i] = tolower(str1[i]);
        str2[i] = tolower(str2[i]);
        if (str1[i] != str2[i]){
            if (str1[i] > str2[i]){
                cout << 1;
                return 0;
            }
            if (str1 < str2){
                cout << -1;
                return 0;
            }
        }
    }
    cout << 0;
}