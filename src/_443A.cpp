//
// https://codeforces.com/problemset/problem/443/A
//

#include <iostream>
#include <set>

using namespace std;

int main() {
    cin.tie(0);
    cout.tie(0);
    set<char> set1;
    char input;
    while(cin >> input){
        if (input == '}'){
            break;
        } else if (input == ',') {
            continue;
        } else {
            set1.insert(input);
        }
    }
    cout << set1.size() - 1;
}