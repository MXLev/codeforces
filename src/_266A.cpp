//
// https://codeforces.com/problemset/problem/266/A
//

#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    string input;
    cin >> input;
    int counter = 0;
    for (int i = 1, j = 0; i < n; ++i){
        if (input[j] != input[i]){
            j++;
            i = j;

        } else {
            counter++;
        }
    }
    cout << counter;
}
