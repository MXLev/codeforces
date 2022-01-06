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
    for (int i = 0; i < n - 1; ++i){
        if (input[i] == input[i + 1]){
            counter++;
        }
    }
    cout << counter;
}
