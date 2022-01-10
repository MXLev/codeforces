//
// https://codeforces.com/problemset/problem/271/A
//

#include <iostream>
#include <set>

using namespace std;

int main(){
    string year;
    cin >> year;
    set<char> set1;
    string temp = year;
    int size = 0;
    while (size != 4){
        temp = to_string(stoi(temp) + 1);
        for (char i : temp) {
            set1.insert(i);
        }
        size = set1.size();
        set1.clear();
    }
    cout << temp;
}