//
// https://codeforces.com/problemset/problem/236/A
//

#include <iostream>
#include <set>

using namespace std;

int main(){
    string input;
    cin >> input;
    set<char> answ;
    for (char i : input) {
        answ.insert(i);
    }
    if (answ.size() % 2 == 0){
        cout << "CHAT WITH HER!";
    } else {
        cout << "IGNORE HIM!";
    }
}